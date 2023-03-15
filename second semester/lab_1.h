#ifndef TASK
#define TASK
void ref_1(int &v1, int &v2);
void p_1(int* v1, int* v2);
float ref_8(float& i);
float p_8(const float* p);
struct Point;
struct Circle;
void ref_11(struct Circle& c, float& y);
void p_11(struct Circle* c, float *y);
void ref_16(int m[10][10], int& r1, int& r2);
void p_16(int m[10][10], int* r1, int* r2);
#endif