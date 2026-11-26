#include <iostream>
using namespace std;

class Number1 {
    int value1, value2;

public:
    Number1(int a, int b) {
        value1 = a;
        value2 = b;
    }

    friend Number1 operator+(Number1, Number1);
    friend Number1 operator-(Number1, Number1);
    friend Number1 operator*(Number1, Number1);
    friend Number1 operator/(Number1, Number1);

    void display() {
        cout << value1 << " " << value2 << endl;
    }
};

Number1 operator+(Number1 n1, Number1 n2) {
    return Number1(n1.value1 + n2.value1,
                   n1.value2 + n2.value2);
}

Number1 operator-(Number1 n1, Number1 n2) {
    return Number1(n1.value1 - n2.value1,
                   n1.value2 - n2.value2);
}

Number1 operator*(Number1 n1, Number1 n2) {
    return Number1(n1.value1 * n2.value1,
                   n1.value2 * n2.value2);
}

Number1 operator/(Number1 n1, Number1 n2) {
    return Number1(n1.value1 / n2.value1,
                   n1.value2 / n2.value2);
}

int main() {
    Number1 n1(20, 40);
    Number1 n2(10, 5);

    Number1 n3 = n1 + n2;
    cout << "Addition: ";
    n3.display();

    Number1 n4 = n1 - n2;
    cout << "Subtraction: ";
    n4.display();

    Number1 n5 = n1 * n2;
    cout << "Multiplication: ";
    n5.display();

    Number1 n6 = n1 / n2;
    cout << "Division: ";
    n6.display();

    return 0;
}

