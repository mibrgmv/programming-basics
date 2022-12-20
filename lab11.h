#ifndef TRIANGLE
#define TRIANGLE
#include <math.h>
struct Point {
    double x;
    double y;
};
struct RightTriangle {
    struct Point A;
    struct Point B;
    struct Point C;
};
double Perimeter(struct RightTriangle *s) {
    double AB, AC, BC;
    AB = sqrt(pow((s->A.x - s->B.x), 2) + pow((s->A.y - s->B.y), 2));
    BC = sqrt(pow((s->B.x - s->C.x), 2) + pow((s->B.y - s->C.y), 2));
    AC = sqrt(pow((s->A.x - s->C.x), 2) + pow((s->A.y - s->C.y), 2));
    if ((AB > 0 && AC > 0 && BC > 0) &&
            (((AB*AB) == (AC*AC) + (BC*BC)) || ((AC*AC) == (AB*AB) + (BC*BC)) || ((BC*BC) == (AB*AB) + (AC*AC))))
    {
        return AB + BC + AC;
    }
    else return -1;
}
double Area(struct RightTriangle *s) {
    double AB, AC, BC;
    AB = sqrt(pow((s->A.x - s->B.x), 2) + pow((s->A.y - s->B.y), 2));
    BC = sqrt(pow((s->B.x - s->C.x), 2) + pow((s->B.y - s->C.y), 2));
    AC = sqrt(pow((s->A.x - s->C.x), 2) + pow((s->A.y - s->C.y), 2));
    if (AB > 0 && AC > 0 && BC > 0) {
        if ((AB*AB) == (AC*AC) + (BC*BC)) {
            return AC*BC;
        }
        else if ((AC*AC) == (AB*AB) + (BC*BC)) {
            return AB*BC;
        }
        else if ((BC*BC) == (AB*AB) + (AC*AC)) {
            return AB*AC;
        }
        else return -1;
    }
    else return -1;
}
#endif