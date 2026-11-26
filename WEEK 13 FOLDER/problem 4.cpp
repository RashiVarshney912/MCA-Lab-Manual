#include <iostream>
using namespace std;

class Distance {
    int meters;

public:

    // Basic type to user-defined type
    Distance(int m) {
        meters = m;
    }

    // User-defined type to basic type
    operator int() {
        return meters;
    }

    void display() {
        cout << meters << " meters" << endl;
    }
};

int main() {

    int x = 50;

    // Basic to user-defined conversion
    Distance d(x);

    cout << "Basic to User-defined: ";
    d.display();

    // User-defined to basic conversion
    int y = static_cast<int>(d);

    cout << "User-defined to Basic: " << y << endl;

    return 0;
}

