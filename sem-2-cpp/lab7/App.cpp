#include "App.h"

int App::start() {
    CircularBuffer<int> buff(10);
    buff.push_back(7);
    buff.push_back(1);
    buff.push_back(15);
    for (int i=0; i<buff.size(); ++i) {
        print(buff[i], "\n");
    }
    print((int)buff.size(), "\n");
    print(std::max(buff.front(), buff.back()), "\n");
    return 0;
}
