#include "lab1.h"

void Task1::ref(int &v1, int &v2) {
    int temp = v1;
    v1 = v2;
    v2 = temp;
}
void Task1::pointer(int *v1, int *v2) {
    int temp = *v1;
    *v1 = *v2;
    *v2 = temp;
}
float Task8::ref(float &i) {
    return 1 / i;
}
float Task8::pointer(const float *p) {
    float i;
    i = *p;
    return 1 / i;
}
struct Point {
    float x, y;
};
struct Circle {
    Point O;
    float radius;
};
void Task11::ref(struct Circle &c, float &y) {
    if (c.radius > y) {
        c.radius -= y;
    } else c.radius = 0;
}
void Task11::pointer(struct Circle *c, float *y) {
    if (c->radius > *y) {
        c->radius -= *y;
    } else c->radius = 0;
}
void Task16::ref(std::vector <std::vector<int> > &matrix, int &r1, int &r2) {
    std::iter_swap(matrix.begin() + r1, matrix.begin() + r2);
}
void Task16::pointer(std::vector <std::vector<int> > &matrix, int *r1, int *r2) {
    std::iter_swap(matrix.begin() + *r1, matrix.begin() + *r2);
}
