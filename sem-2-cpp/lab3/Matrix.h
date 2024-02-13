#ifndef MATRIX
#define MATRIX
class Matrix {
public:
    double self[3][3];
    Matrix operator*(Matrix &B);
    Matrix operator*(int &x);
    Matrix operator+(Matrix &B);
    Matrix operator-(Matrix &B);
    bool operator==(Matrix &A);
    bool operator!=(Matrix &A);
};
#endif
