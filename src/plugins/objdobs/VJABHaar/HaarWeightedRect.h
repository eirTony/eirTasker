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

    void scaleBy(const HaarFeatureScale scale);

    const HaarRectRect & rect(void) const;
    const HaarRectWeight & weight(void) const;

    void operator *= (const HaarFeatureScale scale);

private:
    HaarRectRect mRect;
    HaarRectWeight mWeight;
};

#endif // HAARRECT_H
