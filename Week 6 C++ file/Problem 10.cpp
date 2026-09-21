#include<iostream>
using namespace std;
int main()
{
	char str[100], *p;
	int length=0;
	cout<<"Enter a String : ";
	cin.getline(str,100);
	p=str;
	while(*p!='\0')
	{
		length++;
		p++;
	}
	cout<<"Reversed string : ";
	p=str + length - 1;
	while(p>=str)
	{
		cout<<*p;
		p--;
	}
	return 0;	
}
