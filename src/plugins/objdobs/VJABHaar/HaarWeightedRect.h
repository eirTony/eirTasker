#ifndef HAARRECT_H
#define HAARRECT_H
#include "VJABHaar.h"

class VJABHAARSHARED_EXPORT HaarWeightedRect
{
public:
    HaarWeightedRect(void);
    HaarWeightedRect(const HaarRectRect rect,
             const HaarRectWeight weight);
    HaarWeightedRect(const QString & string);
    void set(const HaarRectRect rect,
             const HaarRectWeight weight);
    void set(const QString & string);

private:
    HaarRectRect mRect;
    HaarRectWeight mWeight;
};

#endif // HAARRECT_H
