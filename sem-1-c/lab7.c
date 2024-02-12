#include <stdio.h>
#include <stdlib.h>
#include <math.h>

enum months{
    january, february, march, april, may,june,
    july, august, september, october, november, december
};
typedef struct Point {
    int x;
    int y;
} point;
typedef struct Triangle {
    point A;
    point B;
    point C;
} triangle;
double TrianglePerimeter(struct Triangle *s) {
    double AB, BC, AC;
    AB = sqrt(pow((s->A.x - s->B.x), 2) + pow((s->A.y - s->B.y), 2));
    BC = sqrt(pow((s->B.x - s->C.x), 2) + pow((s->B.y - s->C.y), 2));
    AC = sqrt(pow((s->A.x - s->C.x), 2) + pow((s->A.y - s->C.y), 2));
    double perimeter = AB + BC + AC;
    return perimeter;
    }
union {
    int x;
    struct {
        int NumLock : 1;
        int CapsLock : 1;
        int ScrollLock : 1;
    };
} condition;
int main() {
    enum months month;
    month = july;
    printf("%d\n", month+1);
    triangle h;
    h.A.x = 0; h.A.y = 0;
    h.B.x = 6; h.B.y = 0;
    h.C.x = 3; h.C.y = 4;
    double a = TrianglePerimeter(&h);
    printf("%lf\n", a);
    scanf("%X", &condition.x);
    condition.NumLock ? printf("NumLock on\n") : printf("NumLock off\n");
    condition.CapsLock ? printf("CapsLock on\n") : printf("CapsLock off\n");
    condition.ScrollLock ? printf("ScrollLock on\n") : printf("ScrollLock off\n");
    return 0;
}
