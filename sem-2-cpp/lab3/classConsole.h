#ifndef CONSOLE
#define CONSOLE
#include <iostream>
#include "classMatrix.h"
#include "classComplex.h"
class Console {
public:
    void Print(Matrix *matrix);
    void Get(Matrix &matrix);
    void Print(Complex *x);
    void Get(Complex &x);
};
#endif
