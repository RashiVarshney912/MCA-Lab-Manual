#include <iostream>
using namespace std;

class Student {
private:
    int rollNo;
    int marks;

public:
    Student() {
        rollNo = 101;
        marks = 85;
    }

    void display() {
        cout << "Roll Number: " << rollNo << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    Student s;
    s.display();

    return 0;
}

