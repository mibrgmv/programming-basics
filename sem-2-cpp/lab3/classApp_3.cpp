#include "classApp_3.h"

int App_3::start() {
    Matrix A = {}, B = {}, C = {};
    Get(A);
    Get(B);

    C = A * B;
    Print(&C);
    int temp = 2;
    C = A * temp;
    Print(&C);
    C = A + B;
    Print(&C);
    A != B ? std::cout << "true" : std::cout << "false" << '\n';

    Complex a, b, c;
    Get(a);
    Get(b);
    c = a + b;
    Print(&c);
    c = c * temp;
    Print(&c);
    return 0;
}
