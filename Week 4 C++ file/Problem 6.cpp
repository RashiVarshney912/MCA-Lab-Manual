#include <iostream>
using namespace std;

int main()
{
	char ch;
	cout<<"Enter a Character : ";
	cin >> ch;
	if (ch>='A' && ch<='Z')
	{
		cout<<"Character is Capital Letter";
	}
	else if (ch>='a' && ch<='z')
	{
		cout<<"Character is Small Letter";
	}
	else if (ch>='0' && ch<='9')
	{
		cout<<"Character is a Number";
	}
	else 
	{
		cout<<"Character is Special Symbol";
	}
	return 0;
}

