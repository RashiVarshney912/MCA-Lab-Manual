
#include <iostream>
using namespace std;

// Inner structure
struct Date
{
    int day;
    int month;
    int year;
};

// Outer structure
struct DOB
{
    char name[50];
    Date birth;
};

int main()
{
    DOB student;

    cout << "Enter your name: ";
    cin.getline(student.name, 50);

    cout << "Enter your date of birth (day month year): ";
    cin >> student.birth.day
        >> student.birth.month
        >> student.birth.year;

    cout << "\n--- Student Details ---" << endl;
    cout << "Name: " << student.name << endl;

    cout << "Date of Birth: "
         << student.birth.day << "/"
         << student.birth.month << "/"
         << student.birth.year << endl;

    return 0;
}

