#include <stdio.h>
#include "lab11.h"
#include "triangle.c"

int main() {
    struct RightTriangle T;
    printf("Enter A coordinates: \n");
    scanf("%lf %lf", &T.A.x, &T.A.y);
    printf("Enter B coordinates: \n");
    scanf("%lf %lf", &T.B.x, &T.B.y);
    printf("Enter C coordinates: \n");
    scanf("%lf %lf", &T.C.x, &T.C.y);
    double P = Perimeter(&T);
    double A = Area(&T);
    printf("Perimeter - %lf; Area - %lf", P, A);
}
