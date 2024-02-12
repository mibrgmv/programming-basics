#include "Algorithms.h"

bool none_of(std::vector<int> &vector, bool condition(int *a)) {
    for (int i = 0; i < vector.size(); i++) {
        if (condition(&vector[i])) return false;
    }
    return true;
}
bool is_sorted(std::vector<int> &vector, bool condition(int *a, int *b)) {
    for (int i = 0; i < vector.size()-1; i++) {
        if (!condition(&vector[i+1], &vector[i])) return false;
    }
    return true;
}
int find_backward(std::vector<int> &vector, int *x) {
    for (int i = vector.size(); i > 0; i--) {
        if (vector[i] == *x)
            return i;
    }
    return -1;
}
bool equal_to_five(int *x) {
    return *x == 5;
}
bool is_odd(int *x) {
    return *x % 2 != 0;
}
bool non_decreasing(int *a, int *b) {
    return *a >= *b;
}
bool increasing(int *a, int *b) {
    return *a > *b;
}
