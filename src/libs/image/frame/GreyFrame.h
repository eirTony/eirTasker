#ifndef GREYFRAME_H
#define GREYFRAME_H

#include "Frame.h"

typedef quint8 GreyPixel;

class GreyFrame : public Frame<GreyPixel>
{
public:
    GreyFrame(void);
};

#endif // GREYFRAME_H
