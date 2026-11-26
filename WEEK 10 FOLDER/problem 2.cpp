#include <iostream>
using namespace std;
struct Employee
{
    string name;
    float basicPay;
    float DA;
    float grossSalary;
};
int main()
{
    Employee emp[4];
    for (int i = 0; i < 4; i++)
    {
        cout << "\nEnter details of Employee " << i + 1 << endl;
        cout << "Enter name: ";
        cin >> emp[i].name;
        cout << "Enter basic pay: ";
        cin >> emp[i].basicPay;
        emp[i].DA = emp[i].basicPay * 0.52;
        emp[i].grossSalary =
            emp[i].basicPay + emp[i].DA;
    }
    cout << "\n----- Employee Salary Details -----\n";
    for (int i = 0; i < 4; i++)
    {
        cout << "\nEmployee Name: " << emp[i].name;
        cout << "\nGross Salary: " << emp[i].grossSalary;
        cout << endl;
    }
    return 0;
}
