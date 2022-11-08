#include <stdio.h>

void getMatrix(int matrix[10][10], int r, int c) {
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
}
void multiplyMatrix(int A[10][10], int B[10][10], int C[10][10], int r1, int c1, int r2, int c2) {
    for (int i = 0; i<r1; i++) {
        for (int j = 0; j<c2; j++) {
            C[i][j] = 0;
        }
    }
    for (int i = 0; i<r1; i++) {
        for (int j = 0; j < c2; j++) {
            for (int k = 0; k<c1; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}
void displayMatrix(int matrix[10][10], int r, int c) {
    printf("Result:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}
int main() {
    int A[10][10], B[10][10], C[10][10], r1, r2, c1, c2;
    printf("Enter dimensions of matrix A: ");
    scanf("%d %d", &r1, &c1);
    printf("Enter dimensions of matrix B: ");
    scanf("%d %d", &r2, &c2);
    if (r1 == c2) {
        printf("Enter matrix A:\n");
        getMatrix(A, r1, c1);
        printf("Enter matrix B:\n");
        getMatrix(B, r2, c2);
        multiplyMatrix(A, B, C, r1, c1, r2, c2);
        displayMatrix(C, r1, c2);
    }
    else { printf("Error"); }

    return 0;
}