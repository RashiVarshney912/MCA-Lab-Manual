#include <iostream>
using namespace std;
struct D_O_B
{
    int day;
    int month;
    int year;
};
struct Student
{
    string name;
    D_O_B dob;
};
int main()
{
    Student s;
    cout << "Enter your name: ";
    getline(cin, s.name);
    cout << "Enter date of birth (day month year): ";
    cin >> s.dob.day >> s.dob.month >> s.dob.year;
    cout << "\n----- Student Details -----";
    cout << "\nName: " << s.name;
    cout << "\nDate of Birth: "
         << s.dob.day << "/"
         << s.dob.month << "/"
         << s.dob.year;
    return 0;
}
