#include <iostream>
using namespace std;

void display(int arr[], int n, int index)
{
    if (index == n)
        return;

    cout << arr[index] << " ";

    display(arr, n, index + 1);
}

int main()
{
    int arr[100], n;

    cout << "Enter size of array: ";
    cin >> n;

    cout << "Enter array elements:\n";

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Array elements are: ";
    display(arr, n, 0);

    return 0;
}
