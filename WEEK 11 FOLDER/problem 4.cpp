#include <iostream>
using namespace std;

int main()
{
    int n, choice;

    cout << "Enter an integer: ";
    cin >> n;

    cout << "\n1. Binary";
    cout << "\n2. Octal";
    cout << "\n3. Hexadecimal";

    cout << "\nEnter your choice: ";
    cin >> choice;

    switch (choice)
    {
        case 1:
            cout << "Binary = ";
            cout << (n >= 0 ? "" : "-");
            n = (n < 0) ? -n : n;

            if (n == 0)
                cout << "0";

            {
                int binary[32], i = 0;

                while (n > 0)
                {
                    binary[i] = n % 2;
                    n = n / 2;
                    i++;
                }

                for (int j = i - 1; j >= 0; j--)
                    cout << binary[j];
            }
            break;

        case 2:
            cout << "Octal = " << oct << n;
            break;

        case 3:
            cout << "Hexadecimal = " << hex << n;
            break;

        default:
            cout << "Invalid choice";
    }

    return 0;
}
