#include <iostream>
using namespace std;

#define SIZE 5

class Queue {
    int arr[SIZE];
    int front, rear;

public:
    Queue() {
        front = -1;
        rear = -1;
    }

    // Insert element
    void enqueue(int x) {
        if (rear == SIZE - 1) {
            cout << "Queue Overflow" << endl;
        }
        else {
            if (front == -1)
                front = 0;

            rear++;
            arr[rear] = x;

            cout << x << " inserted into queue" << endl;
        }
    }

    // Delete element
    void dequeue() {
        if (isEmpty()) {
            cout << "Queue Underflow" << endl;
        }
        else {
            cout << arr[front] << " deleted from queue" << endl;
            front++;

            if (front > rear) {
                front = rear = -1;
            }
        }
    }

    // Show first element
    void showFront() {
        if (isEmpty())
            cout << "Queue is Empty" << endl;
        else
            cout << "Front element: " << arr[front] << endl;
    }

    // Show last element
    void showRear() {
        if (isEmpty())
            cout << "Queue is Empty" << endl;
        else
            cout << "Rear element: " << arr[rear] << endl;
    }

    // Check empty
    bool isEmpty() {
        return front == -1;
    }
};

int main() {
    Queue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    q.showFront();
    q.showRear();

    q.dequeue();

    q.showFront();

    if (q.isEmpty())
        cout << "Queue is Empty" << endl;
    else
        cout << "Queue is Not Empty" << endl;

    return 0;
}

