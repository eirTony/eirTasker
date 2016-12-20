#ifndef SEVERITY_H
#define SEVERITY_H
#include "BaseLib.h"

#include "Enumeration.h"

#define SEVERITY_ENUM(NV) \
    NV(Null, = 0)  \
    NV(BaseTrace, = 100)   \
    NV(Trace,) \
    NV(MaxTrace,) \
    NV(BaseUser, = 200) \
    NV(User,) \
    NV(MaxUser,) \
    NV(BaseInfo, = 300) \
    NV(Info,) \
    NV(MaxInfo,) \
    NV(BaseWarning, = 400) \
    NV(Warning,) \
    NV(MaxWarning,) \
    NV(BaseCritical, = 500) \
    NV(Critical,) \
    NV(MaxCritical,) \
    NV(BaseFatal, = 600) \
    NV(Fatal, ) \
    NV(MaxFatal,) \

class BASESHARED_EXPORT Severity : public Enumeration
{
    DECLARE_ENUMERATION(Severity, SEVERITY_ENUM)
};

#if 0
#include <QList>

#include "BasicName.h"

class BASESHARED_EXPORT Severity
{
public:
    enum SeverityValue
    {
        NullSeverity = 0,
        // expand lists
        MaxSeverity
    };
    typedef QList<Severity> List;

private:
    class Static
    {
        Static(void);
        const static BasicName::List csmNameList;
    };

public:
    Severity(void);
    Severity(const SeverityValue e);
    Severity(const BasicName & n);
    void set(const SeverityValue e);
    void set(const BasicName & n);
    SeverityValue value(void) const;

public:
    SeverityValue value(const BasicName & n);
    BasicName name(const SeverityValue e);

private:
    SeverityValue mEnum = NullSeverity;

    const static Static csmStatic;

private: // static
    //const static BasicName::List csmNameList;
    const static List csmFatalList;
    const static List csmCriticalList;
    const static List csmWarningList;
    const static List csmInfoList;
    const static List csmUserList;
    const static List csmTraceList;
};
#endif
#endif // SEVERITY_H
