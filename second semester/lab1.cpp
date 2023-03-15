#include <iostream>
using namespace std;

// todo Меняет значения двух входных переменных друг на друга.
class Task1 {
public:
    void ref_1(int &v1, int &v2) {
        int temp = v1;
        v1 = v2;
        v2 = temp;
    }
    void p_1(int *v1, int *v2) {
        int temp = *v1;
        *v1 = *v2;
        *v2 = temp;
    }
};
// todo Изменяют вещественную переменную на обратное к ней число.
class Task8 {
public:
    float ref_8(float &i) {
        return 1 / i;
    }
    float p_8(const float *p) {
        float i;
        i = *p;
        return 1 / i;
    }
};
// todo Уменьшает радиус окружности на заданное число.
class Task11 {
public:
    struct Point {
        float x, y;
    };
    struct Circle {
        Point O;
        float radius;
    };
    void ref_11(struct Circle &c, float &y) {
        if (c.radius > y) {
            c.radius -= y;
        } else c.radius = 0;
    }
    void p_11(struct Circle *c, float *y) {
        if (c->radius > *y) {
            c->radius -= *y;
        } else c->radius = 0;
    }
};
// todo Меняет в матрице местами две указанные строчки.
class Task16 {
public:
    void ref_16(int m[10][10], int &r1, int &r2) {
        swap(m[r1], m[r2]);
    }

    void p_16(int m[10][10], int *r1, int *r2) {
        swap(m[*r1], m[*r2]);
    }
};