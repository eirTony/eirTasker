#ifndef MATRIX_H
#define MATRIX_H
#include "TypeLib.h"

#include <QPoint>
#include <QSize>
#include <QVector>

#include "Integer.h"

template <typename T>
    class TYPESHARED_EXPORT Matrix
{
public:
    Matrix(void);
    Matrix(const QSize size, const T & t=T());
    Matrix(const QSize size, const QVector<T> tVector);
    Matrix(const Matrix<T> & other);

    void clear(void);
    void fill(const QSize size, const T & t=T());
    void fill(const T & t=T());
    void reset(void);
    void resize(const QSize size, const T & tNew=T());
    void set(const QSize size, const QVector<T> tVector);
    void set(const int row, const QVector<T> tVector);
    void set(const QPoint pt, const T & t);

    bool isNull(void) const;
    QSize size(void) const;
    QSize reserved(void) const;
    int reservedBytes(void) const;
    T & at(const QPoint pt) const;
    QVector<T> rowData(const int row) const;

    T & operator = (const QPoint pt) const;
    T & operator [] (const QPoint pt) const;

private:
    QSize mSize;
    QSize mReservedSize; // always a power of two on each dimension
    Integer mStrideShift;
    QVector<T> mVector;
};

#include "Matrix.cpp"

#endif // MATRIX_H
