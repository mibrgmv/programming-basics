#include <iostream>
#include "lab1.h"
#include "lab1.cpp"
using namespace std;

int main() {
    cout << "<<TASK1>>" << '\n';
    int a, b;
    a = 5;
    b = 7;
    cout << a << " " << b << "\n";
    ref_1(a, b);
    cout << a << " " << b << "\n";
    p_1(&a, &b);
    cout << a << " " << b << "\n";

    cout << "<<TASK2>>" << '\n';
    float x = 3.1415926535;
    cout << ref_8(x) << "\n";
    cout << p_8(&x) << "\n";

    cout << "<<TASK3>>" << '\n';
    float z = 4.3;
    Circle c{};
    c.O.x = 12.0;
    c.O.y = 4.0;
    c.radius = 13.2;
    ref_11(c, z);
    cout << c.radius << '\n';
    p_11(&c, &z);
    cout << c.radius << '\n';

    cout << "<<TASK4>>" << '\n';
    int r1, r2;
    r1 = 0, r2 = 1;
    int matrix[10][10] = {{1,  7},
                          {0,  0},
                          {-1, 4}};
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            cout << matrix[i][j] << ' ';
        }
        cout << '\n';
    }
    ref_16(matrix, r1, r2);
    cout << "----" << '\n';
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            cout << matrix[i][j] << ' ';
        }
        cout << '\n';
    }
    p_16(matrix, &r1, &r2);
    cout << "----" << '\n';
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            cout << matrix[i][j] << ' ';
        }
        cout << '\n';
    }
    return 0;
}
