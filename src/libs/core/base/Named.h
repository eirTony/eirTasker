/*! @file Named.h Declarations for Named Type template
  *
  */

#ifndef NAMEDMAP_H
#define NAMEDMAP_H

#include <QMap>

/*! @class  Named
  * @brief  Specializes DualMap for case insensitive strings
  */
template <class T> class Named
{
public:
    Named(void) {}
    T invalid(void) const
    { return T(); }
    void clear(void)
    { T_name_map.clear(), name_T_map.clear(); }
    bool isEmpty(void) const
    { return T_name_map.isEmpty() || name_T_map.isEmpty(); }
    int size(void) const
    { return qMin(T_name_map.size(), name_T_map.size()); }
    bool contains(const T & key) const
    { return T_name_map.contains(key); }
    bool contains(const BasicName & key) const
    { return name_T_map.contains(key.toLower()); }
    BasicName value(const T & key) const
    { return contains(key) ? T_name_map.value(key) : BasicName(); }
    BasicName name(const T & key) const
    { return contains(key) ? T_name_map.value(key) : BasicName(); }
    T value(const BasicName & key) const
    { return contains(key.toLower()) ? name_T_map.value(key.toLower()) : T(); }
    void insert(const T & t1, const BasicName & t2)
    { T_name_map.insert(t1, t2), name_T_map.insert(t2.toLower(), t1); }
    T first(const T & t1) const
    { (void)t1; return isEmpty() ? T() : T_name_map.constBegin().key(); }
    QList<T> keys(void) const
    { return T_name_map.keys(); }
    T last(const T & t1) const
    {
        T result(invalid());
        (void)t1;
        if ( ! T_name_map.isEmpty())
        {
            typename QMap<T,BasicName>::const_iterator it = T_name_map.constEnd();
            --it;
            result = it.key();
        }
        return result;
    }
    T next(const T & key) const
    {
        T result(invalid());
        typename QMap<T,BasicName>::const_iterator it = T_name_map.find(key);
        if (T_name_map.end() != it)
            ++it;
        if (T_name_map.end() != it)
            result = it.key();
        return result;
    }
    T previous(const T & key) const
    {
        T result(invalid());
        typename QMap<T,BasicName>::const_iterator it = T_name_map.find(key);
        if (T_name_map.begin() != it)
            --it;
        if (T_name_map.begin() != it)
            result = it.key();
        return result;
    }
    bool remove(const T & key)
    {
        if (contains(key))
        {
            BasicName value = value(key);
            T_name_map.remove(key);
            if (contains(value))
            {
                name_T_map.remove(value);
                return true;
            }
            else
                return false;
        }
        else
            return false;
    } // remove(T)

    bool remove(const BasicName & key)
    {
        if (contains(key.toLower()))
        {
            T value = value(key.toLower());
            name_T_map.remove(key.toLower());
            if (contains(value))
            {
                T_name_map.remove(value);
                return true;
            }
            else
                return false;
        }
        else
            return false;
    } // remove(T)

private:
    QMap<T,BasicName> T_name_map;
    QMap<BasicName,T> name_T_map;
}; // template Named

#endif // NAMEDMAP_H
