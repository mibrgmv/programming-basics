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
double CalculateSide(struct Point X, struct Point Y) {
    return sqrt(pow((X.x - Y.x), 2) + pow((X.y - Y.y), 2));
}
double Perimeter(struct RightTriangle *s) {
    double AB, AC, BC;
    AB = CalculateSide(s->A, s->B);
    BC = CalculateSide(s->B, s->C);
    AC = CalculateSide(s->A, s->C);
    if ((AB > 0 && AC > 0 && BC > 0) &&
        (((AB*AB) == (AC*AC) + (BC*BC)) || ((AC*AC) == (AB*AB) + (BC*BC)) || ((BC*BC) == (AB*AB) + (AC*AC))))
    {
        return AB + BC + AC;
    }
    else return -1;
}
double Area(struct RightTriangle *s) {
    double AB, AC, BC;
    AB = CalculateSide(s->A, s->B);
    BC = CalculateSide(s->B, s->C);
    AC = CalculateSide(s->A, s->C);
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
