#include "console.h"

void Console::Print(double x) {
    std::cout << x << '\n';
}
void Console::Print(std::string string) {
    std::cout << string << '\n';
}
void Console::Get(double &x) {
    std::cin >> x;
}
