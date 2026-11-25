#include<iostream>
#include<string>
using namespace std;
int main()
{
	string  str , substr;
	cout<<"Enter string :";
	getline(cin,str);
	cout<<"Enter substring : ";
	getline(cin,substr);
	size_t pos = str.find(substr);
	if(pos !=string::npos)
	{
		cout<<"Position = "<< pos;
	}
	else
	{
		cout<<"Position = 1";
	}
	return 0;
}
