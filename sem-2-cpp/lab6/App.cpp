#include "App.h"
#include <vector>
int App::start() {
    std::vector<int> a;
    a.push_back(1);
    a.push_back(2);
    a.push_back(4);
    a.push_back(6);
    a.push_back(6);
    print(none_of(a, equal_to_five));
    print(none_of(a, is_odd));
    print(is_sorted(a, non_decreasing));
    print(is_sorted(a, increasing));
    int k = 4;
    print(find_backward(a, &k));
    return 0;
}
