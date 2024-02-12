#include "classConsole.h"

void Console::Print(Matrix *matrix) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            std::cout << matrix->self[i][j] << ' ';
        }
        std::cout << '\n';
    }
}
void Console::Get(Matrix &matrix) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            std::cin >> matrix.self[i][j];
        }
    }
}
void Console::Print(Complex *x) {
    if (x->im > 0)
        std::cout << x->re << '+' << x->im << 'i' << '\n';
    else
        std::cout << x->re << x->im << 'i' << '\n';
}
void Console::Get(Complex &x) {
    std::cin >> x.re >> x.im;
}
