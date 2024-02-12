#ifndef SET
#define SET
#include "square.h"
#include <vector>
class Set {
public:
    std::vector<Rectangle> self;
    void Add(Rectangle R);
    double areaSum();
    double perimeterSum();
};
#endif
