#include <iostream>
using namespace std;

class Person {
public:
    int age;

    void getAge() {
        cout << "Enter age: ";
        cin >> age;
    }

    void displayAge() {
        cout << "Age: " << age << endl;
    }
};

// Virtual base class
class Student : virtual public Person {
};

class Employee : virtual public Person {
};

class TeachingAssistant : public Student, public Employee {
};

int main() {
    TeachingAssistant t;

    t.getAge();
    t.displayAge();

    return 0;
}

