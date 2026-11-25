#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void moveDisk(vector<int>& source,
              vector<int>& destination,
              char s, char d)
{
    if (source.empty())
    {
        int disk = destination.back();
        destination.pop_back();
        source.push_back(disk);

        cout << "Move disk " << disk
             << " from " << d << " to " << s << endl;
    }
    else if (destination.empty())
    {
        int disk = source.back();
        source.pop_back();
        destination.push_back(disk);

        cout << "Move disk " << disk
             << " from " << s << " to " << d << endl;
    }
    else if (source.back() < destination.back())
    {
        int disk = source.back();
        source.pop_back();
        destination.push_back(disk);

        cout << "Move disk " << disk
             << " from " << s << " to " << d << endl;
    }
    else
    {
        int disk = destination.back();
        destination.pop_back();
        source.push_back(disk);

        cout << "Move disk " << disk
             << " from " << d << " to " << s << endl;
    }
}

void hanoiNonRecursive(int n)
{
    vector<int> A, B, C;

    for (int i = n; i >= 1; i--)
        A.push_back(i);

    char s = 'A', a = 'B', d = 'C';

    if (n % 2 == 0)
        swap(a, d);

    int totalMoves = 1;

    for (int i = 0; i < n; i++)
        totalMoves *= 2;

    totalMoves--;

    for (int i = 1; i <= totalMoves; i++)
    {
        if (i % 3 == 1)
            moveDisk(A, C, s, d);
        else if (i % 3 == 2)
            moveDisk(A, B, s, a);
        else
            moveDisk(B, C, a, d);
    }
}

int main()
{
    int n;

    cout << "Enter number of disks (1 to 20): ";
    cin >> n;

    if (n < 1 || n > 20)
    {
        cout << "Enter a number between 1 and 20.";
        return 0;
    }

    cout << "\nNon-Recursive Solution:\n";
    hanoiNonRecursive(n);

    return 0;
}
