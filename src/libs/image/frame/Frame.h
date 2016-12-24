#ifndef FRAME_H
#define FRAME_H
#include "FrameLib.h"

#include "../../../libs/data/Type/Matrix.h"

template <class PIXEL>
    class FRAMESHARED_EXPORT Frame
            : public Matrix<PIXEL>
{

public:
    Frame(void);

private:
};

#include "Frame.cpp"

#endif // FRAME_H
