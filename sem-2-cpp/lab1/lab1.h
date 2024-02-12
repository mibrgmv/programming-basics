#ifndef TASK
#define TASK
#include <vector>
class Task1 {
public:
    void ref(int &v1, int &v2);
    void pointer(int *v1, int *v2);
};
class Task8 {
public:
    float ref(float &i);
    float pointer(const float *p);
};
struct Point;
struct Circle;
class Task11 {
public:
    void ref(struct Circle &c, float &y);
    void pointer(struct Circle *c, float *y);
};
class Task16 {
public:
    void ref(std::vector <std::vector<int> > &matrix, int &r1, int &r2);
    void pointer(std::vector <std::vector<int> > &matrix, int *r1, int *r2);
};
#endif
