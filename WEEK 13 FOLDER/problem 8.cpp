#include <iostream>
using namespace std;

#define SIZE 5

class Stack {
    int arr[SIZE];
    int top;

public:
    Stack() {
        top = -1;
    }

    // Insert element
    void push(int x) {
        if (top == SIZE - 1) {
            cout << "Stack Overflow" << endl;
        }
        else {
            top++;
            arr[top] = x;
            cout << x << " pushed into stack" << endl;
        }
    }

    // Delete element
    void pop() {
        if (top == -1) {
            cout << "Stack Underflow" << endl;
        }
        else {
            cout << arr[top] << " popped from stack" << endl;
            top--;
        }
    }

    // Show top element
    void peek() {
        if (top == -1) {
            cout << "Stack is Empty" << endl;
        }
        else {
            cout << "Top element: " << arr[top] << endl;
        }
    }

    // Check empty
    bool isEmpty() {
        return top == -1;
    }
};

int main() {
    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);

    s.peek();

    s.pop();

    s.peek();

    if (s.isEmpty())
        cout << "Stack is Empty" << endl;
    else
        cout << "Stack is Not Empty" << endl;

    return 0;
}

