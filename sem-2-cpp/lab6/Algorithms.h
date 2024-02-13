#ifndef ALGO
#define  ALGO
#include <vector>

bool none_of(std::vector<int> &vector, bool condition(int *a));
bool is_sorted(std::vector<int> &vector, bool condition(int *a, int *b));
int find_backward(std::vector<int> &vector, int *x);
bool equal_to_five(int *x);
bool is_odd(int *x);
bool non_decreasing(int *a, int *b);
bool increasing(int *a, int *b);

#endif
