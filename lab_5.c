#include <stdio.h>

void Display(int array[]) {
    int c = 1;
    for (int i = 0; i < sizeof (array); i++) {
        printf("%d ", array[i]);
        c++;
        if (c > 4) {
            printf("\n");
            c = 1;
        }
    }
}
void Matrix(int a11, int a12, int a21, int a22, int b11, int b12, int b21, int b22) {
    int c11, c12, c21, c22;
    c11 = a11*b11 + a12*b21;
    c12 = a11*b12 + a12*b22;
    c21 = a21*b11 + a22*b21;
    c22 = a21*b12 + a22*b22;
    printf("%d %d \n%d %d", c11, c12, c21, c22);
}
int main() {
    int a, n = 8, array[n];
    for (int i = 0; i < n; i++) {
       scanf("%d", &a);
       array[i] = a;
    }
    Display(array);
    Matrix(2, 1, 1, 3, 1, 2, 3, 1);
    return 0;
}