#include<iostream>
using namespace std;
int main()
{
	int a[100],n,i,*p;
	cout<<"Enter number of Elements : ";
	cin>> n;
	p=a;
	cout<<"Enter array Elements :";
	for(i=0;i<n;i++)
	{
		cin>>*(p+i);
	}
	cout<<"Elements using pointer are : ";
	for(i=0;i<n;i++)
	{
		cout<<*(p+i)<<" ";
	}
	return 0;
}
