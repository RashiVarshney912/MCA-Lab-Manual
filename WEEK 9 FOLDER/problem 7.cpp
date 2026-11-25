#include <iostream>
using namespace std;

int findMax(int arr[], int n)
{
    if (n == 1)
        return arr[0];
    int maxValue = findMax(arr, n - 1);
    if (arr[n - 1] > maxValue)
        return arr[n - 1];
    return maxValue;
}
int findMin(int arr[], int n)
{
    if (n == 1)
        return arr[0];
    int minValue = findMin(arr, n - 1);
    if (arr[n - 1] < minValue)
        return arr[n - 1];
    return minValue;
}
int main()
{
    int arr[100], n;
    cout << "Enter size of array: ";
    cin >> n;
    if (n <= 0)
    {
        cout << "Invalid array size.";
        return 0;
    }
    cout << "Enter array elements:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Maximum element = "
         << findMax(arr, n) << endl;
    cout << "Minimum element = "
         << findMin(arr, n);
    return 0;
}
