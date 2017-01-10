/*! @file Enumeration.h Declarations for Enumeration base class
*
*/


#ifndef ENUMERATION_H
#define ENUMERATION_H
#include "TypeLib.h"

#include <QList>
#include <QString>

#include <../../core/base/BasicName.h>
#include <../../core/base/Named.h>

/*! @class Enumeration
 *  @brief Base class for named enumerations.

@section Goals Goals
The following goals were used in the design of this facility.
-   Ability to declare static constants (enum is part of class)
-   Assignment and copy
-   Equality and ordering
-   isNull() and isValid()
-   Static lookup by name
-   first()/last() or min()/max()
-   increment/decrement or next()/previous()
-   use as switch case
-   usable in other libraries
-   default c'tor is null and not valid

@section Usage Usage
@subsection hFileUsage Derived class' h file
@code
#include <eirBase/Enumeration.h>
#define ENUMCLASS_ENUM(NV) \
    NV(Null, = 0)  \
    NV(Minimum,)   \

class CLASSSHARED_EXPORT EnumClass : public Enumeration
{
    DECLARE_ENUMERATION(EnumClass,  // private
            ENUMCLASS_ENUM)
    // other stuff as needed
};

@endcode

@subsection cppFileUsage Derived class' cpp file
@code
#include "EnumClass.h"
DEFINE_ENUMERATION(EnumClass, ENUMCLASS_ENUM);
// other support functions as needed
@endcode

*/
class TYPESHARED_EXPORT Enumeration
{
public:
    Enumeration(void);
    Enumeration(Named<int> * p, const int value);
    Enumeration(Named<int> * p, const BasicName & name);
    Enumeration(const Enumeration & other);
    Enumeration & operator = (const Enumeration & other);
    bool isValid(void) const;
    bool isNull(void) const;
    bool isEmpty(void) const;
    BasicName nameOf(const int value) const;
    int valueOf(const BasicName & name) const;
    BasicName name(void) const;
    int value(void) const;
    bool is(const int value) const;
    void set(const int value);
    void set(const BasicName & value);
    void invalidate(void);
    bool operator == (const Enumeration & other) const;
    bool operator < (const Enumeration & other) const;
    operator int (void) const;
    int operator() (void) const;
    Enumeration first(void) const;
    Enumeration last(void) const;
    Enumeration & operator ++ (void); // prefix ++e
    Enumeration operator ++ (int);  // postfix e++
    Enumeration & operator -- (void); // prefix --e
    Enumeration operator -- (int);  // postfix e--
    QList<int> values(void) const;
    QList<Enumeration> all(void);
    BasicNameList nameFlags(int f);

public: // pseudo-static functions
    bool isValid(const BasicName & name);
    int value(const BasicName & name);
    QList<Enumeration> parse(const QString & string);
    int parseFlags(const QString & string);

protected:
    enum initializer { initialize };
    Enumeration(enum initializer i) { (void)i; }
    static void insert(const int value, const BasicName & name);

protected:
    int value_i;
    BasicName name_s;
    Named<int> * name_map;
}; // Enumeration

#define ENUMERATION_VALUE(NAME, VALUE) \
    NAME VALUE,

#define ENUMERATION_INSERT(NAME, VALUE) \
    maps.insert(NAME, #NAME); \

#define INSERT_ENUMERATION(DEF) \
    DEF(ENUMERATION_INSERT) ; \

#define DECLARE_ENUMERATION(CLASS, DEF) \
    public: \
        enum type { DEF(ENUMERATION_VALUE) }; \
        CLASS(enum initializer i) : Enumeration(i) \
        { name_map = &maps; INSERT_ENUMERATION(DEF); } \
        CLASS(void) : Enumeration() {} \
        CLASS(const int value) : Enumeration(&maps, value) {} \
        CLASS(const BasicName & name) : Enumeration(&maps, name) {} \
        static BasicName enumName(void) { return enumName_s; } \
        static CLASS base(void) { return dummy; } \
    private: \
        static Named<int> maps; \
        static BasicName enumName_s; \
        static CLASS dummy; \

#define DEFINE_ENUMERATION(CLASS, DEF) \
    Named<int> CLASS::maps; \
    BasicName CLASS::enumName_s( #CLASS ); \
    CLASS CLASS::dummy(CLASS::initialize); \

#endif // ENUMERATION_H
