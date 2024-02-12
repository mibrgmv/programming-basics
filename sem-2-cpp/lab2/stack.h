#ifndef STACK
#define STACK
struct Node {
    int data;
    struct Node* next;
};
class Stack {
public:
    int max_depth;
    int depth;
    struct Node *top;
    Stack(int n);
    void push(int element);
    void pop();
};
#endif