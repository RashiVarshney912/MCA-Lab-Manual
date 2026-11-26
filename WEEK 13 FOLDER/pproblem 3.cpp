#include <iostream>
using namespace std;

class Number3 {
    int value;

public:
    Number3(int v) {
        value = v;
    }

    // Unary minus operator
    Number3 operator-() {
        return Number3(-value);
    }

    // Increment operator
    Number3 operator++() {
        return Number3(++value);
    }

    // Decrement operator
    Number3 operator--() {
        return Number3(--value);
    }

    void display() {
        cout << value << endl;
    }
};

int main() {
    Number3 n(10);

    cout << "Original number: ";
    n.display();

    Number3 a = -n;
    cout << "Unary minus: ";
    a.display();

    ++n;
    cout << "After increment: ";
    n.display();

    --n;
    cout << "After decrement: ";
    n.display();

    return 0;
}

