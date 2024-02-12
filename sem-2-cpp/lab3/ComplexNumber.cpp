#include "ComplexNumber.h"
#include <math.h>

Complex::Complex() : re(), im() {}
double Complex::module() {
    return sqrt(re * re + im * im);
}
Complex Complex::operator+ (Complex &num) {
    Complex temp;
    temp.re = re + num.re;
    temp.im = im + num.im;
    return temp;
}
Complex Complex::operator* (int &x) {
    Complex temp;
    temp.re = re * x;
    temp.im = im * x;
    return temp;
}
Complex Complex::operator* (Complex &num) {
    Complex temp;
    temp.re = re * num.re - im * num.im;
    temp.im = re * num.im + num.re * im;
    return temp;
}
