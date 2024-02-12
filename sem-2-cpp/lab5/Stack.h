#ifndef STACK
#define STACK
#include <vector>
struct Node {
    int data;
    struct Node* next;
};
class Stack {
private:
    int max_depth;
    int depth;
public:
    struct Node *top;
    Stack(int n);
    void push(int element);
    void pop();
};
#endif
