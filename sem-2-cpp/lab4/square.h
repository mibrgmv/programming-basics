#ifndef SQUARE
#define SQUARE
class GeoFigure {
public:
    double a, b;
    virtual double getArea() = 0;
    virtual double getPerimeter() = 0;
};
class Rectangle : public GeoFigure {
public:
    double getArea();
    double getPerimeter();
};
#endif
