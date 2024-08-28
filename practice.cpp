#include <iostream>
#define MAX 1000

class Stack {
    int top;

public:
    int arr[MAX]; // Maximum size of Stack

    Stack() { top = -1; }
    bool push(int x);
    int pop();
    int peek();
    bool isEmpty();
};

// Function to add an element x to the stack
bool Stack::push(int x) {
    if (top >= (MAX - 1)) {
        std::cout << "Stack Overflow\n";
        return false;
    } else {
        arr[++top] = x;
        std::cout << x << " pushed into stack\n";
        return true;
    }
}

// Function to remove the top element from the stack
int Stack::pop() {
    if (top < 0) {
        std::cout << "Stack Underflow\n";
        return 0;
    } else {
        int x = arr[top--];
        return x;
    }
}

// Function to return the top element from the stack
int Stack::peek() {
    if (top < 0) {
        std::cout << "Stack is Empty\n";
        return 0;
    } else {
        int x = arr[top];
        return x;
    }
}

// Function to check if the stack is empty
bool Stack::isEmpty() {
    return (top < 0);
}

int main() {
    Stack stack;
    stack.push(10);
    stack.push(20);
    stack.push(30);
    std::cout << stack.pop() << " popped from stack\n";
    std::cout << "Top element is " << stack.peek() << std::endl;
    std::cout << "Stack is " << (stack.isEmpty() ? "empty" : "not empty") << std::endl;

    return 0;
}
