#ifndef FRAME_H
#define FRAME_H
#include "FrameLib.h"

#include <../../data/Type/Matrix.h>

template <class PIXEL>
    class FRAMESHARED_EXPORT Frame
{

public:
    Frame(void);

private:
    Matrix<PIXEL> mMatrix;
};

#include "Frame.cpp"

#endif // FRAME_H
