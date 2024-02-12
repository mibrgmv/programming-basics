#ifndef COMPLEX
#define COMPLEX
class Complex {
public:
    double re;
    double im;
public:
    Complex();
    double module();
    Complex operator+ (Complex &num);
    Complex operator* (int &x);
    Complex operator* (Complex &num);
};
#endif
