#include <iostream>
using namespace std;

int arraySum(int arr[], int n)
{
    if (n == 0)
        return 0;

    return arr[n - 1] + arraySum(arr, n - 1);
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

    cout << "Sum of array elements = "
         << arraySum(arr, n);

    return 0;
}
