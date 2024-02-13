#ifndef TRIANGLE
#define TRIANGLE
struct Point;
struct RightTriangle;
double CalculateSide(struct Point X, struct  Point Y);
double Perimeter(struct RightTriangle *s);
double Area(struct RightTriangle *s);
#endif
