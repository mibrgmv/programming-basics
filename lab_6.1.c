#include <stdio.h>

void Display(int *p, int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", *p++);
    }
}
int main() {
    int n = 4; int a[n];
    int *p;
    p = a;
    for (int i = 0; i < n; i++) {
        scanf("%d", &*p++);
    }
    Display(a, n);
    return 0;
}