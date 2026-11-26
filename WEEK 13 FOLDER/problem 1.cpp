#include <iostream>
using namespace std;

class Number {
    int value1, value2;

public:
    Number(int a, int b) {
        value1 = a;
        value2 = b;
    }

    Number operator+(Number obj) {
        return Number(value1 + obj.value1,
                      value2 + obj.value2);
    }

    Number operator-(Number obj) {
        return Number(value1 - obj.value1,
                      value2 - obj.value2);
    }

    Number operator*(Number obj) {
        return Number(value1 * obj.value1,
                      value2 * obj.value2);
    }

    Number operator/(Number obj) {
        return Number(value1 / obj.value1,
                      value2 / obj.value2);
    }

    void display() {
        cout << value1 << " " << value2 << endl;
    }
};

int main() {
    Number n1(20, 40);
    Number n2(10, 5);

    Number n3 = n1 + n2;
    cout << "Addition: ";
    n3.display();

    Number n4 = n1 - n2;
    cout << "Subtraction: ";
    n4.display();

    Number n5 = n1 * n2;
    cout << "Multiplication: ";
    n5.display();

    Number n6 = n1 / n2;
    cout << "Division: ";
    n6.display();

    return 0;
}

