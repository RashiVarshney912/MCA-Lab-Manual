#include <iostream>
using namespace std;

int main()
{
    int n, choice;
    int d1, d2, d3, d4;
    int reverse = 0, temp;

    cout << "Enter a 4-digit number: ";
    cin >> n;

    if (n < 1000 || n > 9999)
    {
        cout << "Please enter a valid 4-digit number.";
        return 0;
    }

    temp = n;

    d1 = temp % 10;
    temp = temp / 10;

    d2 = temp % 10;
    temp = temp / 10;

    d3 = temp % 10;
    temp = temp / 10;

    d4 = temp % 10;

    reverse = d1 * 1000 + d2 * 100 + d3 * 10 + d4 * 1;

    cout << "\n1. Reverse of number"; 
    cout << "\n2. Sum of number and its reverse";
    cout << "\n3. Sum of alternative digits";

    cout << "\nEnter your choice: ";
    cin >> choice;

    switch (choice)
    {
        case 1:
            cout << "Reverse = " << reverse;
            break;

        case 2:
            cout << "Sum = " << n + reverse;
            break;

        case 3:
            cout << "1st + 3rd digit = " << d4 + d2;
            cout << "\n2nd + 4th digit = " << d1 + d3;
            break;

        default:
            cout << "Invalid choice";
    }

    return 0;
}
