#include "HaarWeightedRect.h"

#include <QIODevice>
#include <QTextStream>

HaarWeightedRect::HaarWeightedRect(void) : mWeight(0.0) {;}

HaarWeightedRect::HaarWeightedRect(const HaarRectRect rect,
                                   const HaarRectWeight weight)
    : mRect(rect), mWeight(weight) {;}

HaarWeightedRect::HaarWeightedRect(const QString & string)
{
    set(string);
}

void HaarWeightedRect::set(const HaarRectRect rect,
                           const HaarRectWeight weight)
{
    mRect = rect, mWeight = weight;
}

void HaarWeightedRect::set(const QString & string)
{
    QTextStream str(string.toLocal8Bit(), QIODevice::ReadOnly);
    int left, top, right, bottom;
    HaarRectWeight weight;

    str >> left >> top >> right >> bottom >> weight;

    mRect = QQRect(QPoint(left,top), QPoint(bottom, right));
    mWeight = weight;
}


void HaarWeightedRect::scaleBy(const HaarFeatureScale scale)
{
    mRect *= scale;
}

const HaarRectRect & HaarWeightedRect::rect(void) const
{
    return mRect;
}

const HaarRectWeight & HaarWeightedRect::weight(void) const
{
    return mWeight;
}


void HaarWeightedRect::operator *= (const HaarFeatureScale scale)
{
    scaleBy(scale);
}
