#include<iostream>
#include<string>
#include<cctype>
using namespace std;
int main()
{
	string str, rev = "";
	int i;
	cout<<"Enter a string : ";
	getline(cin,str);
	string temp =" ";
	for(int i=str.length()-1;i>=0;i--)
	{
		if(str[i]=' ')
		{
		   temp +=tolower(str[i]);
	    }
		
	}
	str=temp;
	for(int i=str.length()-1;i>=0;i--)
	{
		rev+=str[i];
	}
	if(str==rev)
	    cout<<"String is Palindrome";
	else
	    cout<<"String is not Palindrome";
    return 0;
}  
