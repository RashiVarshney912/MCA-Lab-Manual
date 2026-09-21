#include<iostream>
using namespace std;
int main()
{
	int a, *p;
	cout<<"Enter a number : ";
	cin >> a;
	p = &a;
	cout<<"\nValue of variable = " << a;
	cout<< "\nAddress of variable = " << p;
	return 0;
}
