#ifndef INDEX_H
#define INDEX_H


class Index
{
public:
    Index(const int x=-1);
    bool isValid(const int size) const;
    operator int (void) const;

private:
    int mInt;
};

#endif // INDEX_H
