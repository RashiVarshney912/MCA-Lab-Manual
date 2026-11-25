#include <iostream>
using namespace std;
void swap_value(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
    cout << "Inside swap_value: "
         << a << " " << b << endl;
}
void swap_reference(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
int main()
{
    int x, y, choice;
    cout << "Enter two numbers: ";
    cin >> x >> y;
    cout << "\n1. Call by Value";
    cout << "\n2. Call by Reference";
    cout << "\nEnter your choice: ";
    cin >> choice;
    switch (choice)
    {
        case 1:
            swap_value(x, y);
            cout << "After swapping: "
                 << x << " " << y;
            break;
        case 2:
            swap_reference(x, y);
            cout << "After swapping: "
                 << x << " " << y;
            break;
        default:
            cout << "Invalid choice";
    }
    return 0;
}
