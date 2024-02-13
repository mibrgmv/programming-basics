#include "Power.h"

int power(int &x, int power) {
    power--;
    int temp = x;
    for (int _ = 0; _ < power; _++) {
        temp *= x;
    }
    x = temp;
    return x;
}
double power(double &x, int power) {
    power--;
    double temp = x;
    for (int _ = 0; _ < power; _++) {
        temp *= x;
    }
    x = temp;
    return x;
}
