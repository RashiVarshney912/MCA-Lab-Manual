#include <iostream>
using namespace std;
class Calculator {
private:
    int a, b;
public:
    Calculator(int x, int y) {
        a = x;
        b = y;
    }
    void calculate() {
        cout << "Addition = " << a + b << endl;
        cout << "Subtraction = " << a - b << endl;
        cout << "Multiplication = " << a * b << endl;
        if (b != 0)
            cout << "Division = " << (float)a / b << endl;
        else
            cout << "Division not possible" << endl;
    }
};
int main() {
    Calculator c(20, 5);
    c.calculate();
    return 0;
}

