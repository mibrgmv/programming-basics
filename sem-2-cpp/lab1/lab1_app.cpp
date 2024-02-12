#include <iostream>
#include "lab1.cpp"
void getMatrix(std::vector<std::vector<int> > &M) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            std::cin >> M[i][j];
        }
    }
}
void displayMatrix(std::vector<std::vector<int> > &M) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            std::cout << M[i][j] << ' ';
        }
        std::cout << '\n';
    }
    std::cout << '\n';
}
int main() {
    Task1 t1;
    int a = 5, b = 7;
    std::cout << a << " " << b << "\n";
    t1.ref(a, b);
    std::cout << a << " " << b << "\n";
    t1.pointer(&a, &b);
    std::cout << a << " " << b << "\n";

    Task8 t8;
    float x = 3.1415926535;
    std::cout << t8.ref(x) << "\n";
    std::cout << t8.pointer(&x) << "\n";

    Task11 t11;
    float z = 4.3;
    Circle c = {};
    c.O.x = 12.0;
    c.O.y = 4.0;
    c.radius = 13.2;
    t11.ref(c, z);
    std::cout << c.radius << '\n';
    t11.pointer(&c, &z);
    std::cout << c.radius << '\n';

    Task16 t16;
    int r1, r2;
    std::vector<std::vector<int> > m(10, std::vector<int>(10));
    r1 = 0, r2 = 1;
    std::cout << "Input a 3x3 matrix" << "\n";
    getMatrix(m);
    displayMatrix(m);
    t16.ref(m, r1, r2);
    displayMatrix(m);
    t16.pointer(m, &r1, &r2);
    displayMatrix(m);
    return 0;
}
