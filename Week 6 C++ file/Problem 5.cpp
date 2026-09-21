#include<iostream>
using namespace std;
int main()
{
	char str[100];
	char *p;
	cout<<"Enter a string : ";
	cin.getline(str,100);
	p = str;
	cout<<"String is "<<p;
	return 0;
}
