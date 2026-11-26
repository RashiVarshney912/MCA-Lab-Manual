#include <iostream>
using namespace std;
union Address
{
    char name[50];
    char home_address[100];
    char hostel_address[100];
    char city[50];
    char state[50];
    char zip[15];
};
int main()
{
    Address a;
    cout << "Enter Name: ";
    cin.getline(a.name, 50);
    cout << "Name: " << a.name << endl;
    cout << "Enter Home Address: ";
    cin.getline(a.home_address, 100);
    cout << "Home Address: " << a.home_address << endl;
    cout << "Enter Hostel Address: ";
    cin.getline(a.hostel_address, 100);
    cout << "Hostel Address: " << a.hostel_address << endl;
    cout << "Enter City: ";
    cin.getline(a.city, 50);
    cout << "City: " << a.city << endl;
    cout << "Enter State: ";
    cin.getline(a.state, 50);
    cout << "State: " << a.state << endl;
    cout << "Enter ZIP Code: ";
    cin.getline(a.zip, 15);
    cout << "ZIP Code: " << a.zip << endl;
    return 0;
}
