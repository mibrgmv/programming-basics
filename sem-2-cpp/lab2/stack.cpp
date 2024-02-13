#include "stack.h"
#include <iostream>
#include <vector>
using namespace std;
Stack::Stack(int n) : depth(), top() {
    max_depth = n;
}
void Stack::push(int element) {
    if (depth == max_depth) {
        cout << "Max stack depth reached" << '\n';
        return;
    }
    depth++;
    Node *temp = (Node *) operator new(sizeof(Node));
    temp->data = element;
    temp->next = top;
    top = temp;
}
void Stack::pop() {
    depth--;
    struct Node *temp = top;
    if (top == nullptr) {
        return;
    }
    top = top->next;
    free(temp);
}