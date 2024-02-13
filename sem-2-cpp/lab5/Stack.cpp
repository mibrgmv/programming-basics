#include "Stack.h"

Stack::Stack(int n) : depth(), top() {
    max_depth = n;
}
void Stack::push(int element) {
    if (depth == max_depth)
        throw std::overflow_error("Stack overflow");
    depth++;
    Node *temp = (Node *) operator new (sizeof(Node));
    temp->data = element;
    temp->next = top;
    top = temp;
}
void Stack::pop() {
    depth--;
    struct Node *temp = top;
    if (top == nullptr)
        throw std::underflow_error("Stack underflow");
    top = top->next;
    free(temp);
}
