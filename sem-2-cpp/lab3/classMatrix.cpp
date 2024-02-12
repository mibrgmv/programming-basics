#include <iostream>
#include "classMatrix.h"

double self[3][3];
Matrix Matrix::operator*(Matrix &B) {
    Matrix A;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++)
                A.self[i][j] += this->self[i][k] * B.self[k][j];
        }
    }
    return A;
}
Matrix Matrix::operator*(int &x) {
    Matrix A;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++)
                A.self[i][j] = this->self[i][j] * x;
        }
    }
    return A;
}
Matrix Matrix::operator+(Matrix &B) {
    Matrix A;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            A.self[i][j] = this->self[i][j] + B.self[i][j];
        }
    }
    return A;
}
Matrix Matrix::operator-(Matrix &B) {
    Matrix A;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            A.self[i][j] = this->self[i][j] - B.self[i][j];
        }
    }
    return A;
}
bool Matrix::operator==(Matrix &A) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (this->self[i][j] != A.self[i][j]) {
                return false;
            }
        }
    }
    return true;
}
bool Matrix::operator!=(Matrix &A) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (this->self[i][j] != A.self[i][j]) {
                return true;
            }
        }
    }
    return false;
}
