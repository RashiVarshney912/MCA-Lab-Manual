#include<iostream>
#include<string>
using namespace std;
void insertString(string &str, string sub, int pos)
{
	str.insert(pos,sub);
}
void deleteString(string &str, int pos, int n)
{
	str.erase(pos, n);
}
int main()
{
	string str, sub;
	int pos, n;
	cout<<"Enter main string : ";
	getline(cin,str);
	cout<<"Enter substring to insert : ";
	getline(cin,sub);
	cout<<"Enter position : ";
	cin>>pos;
	insertString(str,sub,pos);
	cout<<"After insertion : "<<str<<endl;
	cout<<"Enter position for deletion : ";
	cin>>pos;
	cout<<"Enter number of characters to delete : ";
	cin>>n;
	deleteString(str,pos,n);
	cout<<"After deletion : "<<str;
	return 0;
}      
