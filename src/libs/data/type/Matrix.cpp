#include "Matrix.h"

template<typename T> Matrix<T>::Matrix(void)
{

}

template<typename T> Integer Matrix<T>::index(const QPoint pt) const
{
    return (pt.y() << mStrideShift) + pt.x();
}

template<typename T> T Matrix<T>::at(const QPoint pt) const
{
    return mVector.at(index(pt));
}

template<typename T> T Matrix<T>::operator [] (const QPoint pt) const
{
    return at(pt);
}
