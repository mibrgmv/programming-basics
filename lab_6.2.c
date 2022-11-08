#include <stdio.h>
#include <stdlib.h>

void Display(int *p, int n) {
    int c = 1;
    for (int i = 0; i < n; i++) {
        printf("%d ", *p++);
        c++;
        if (c > 2) {
            printf("\n");
            c = 0;
        }
    }
}
int main() {
    int n = 4;
    int *array = calloc(n, sizeof(n));
    if (array!=NULL) {
        int *p;
        p = array;
        for (int i = 0; i < n; i++) {
            scanf("%d", &*p++);
        }
        Display(array, n);
        free(array);
    }
    return 0;
}