#include<iostream>
using namespace std;
int main()
{
	char str1[100], str2[100], *p1, *p2;
	cout<<"Enter First string : ";
	cin.getline(str1,100);
	cout<<"Enter Second string : ";
	cin.getline(str2,100);
	p1=str1;
	p2=str2;
	while(*p1 !='\0')
	{
		p1++;
	}
	while(*p2 !='\0')
	{
		*p1=*p2;
		p1++;
		p2++;
	}
	*p1='\0';
	cout<<"Concatenate String : "<<str1;
	return 0;
}
