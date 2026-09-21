#include<iostream>
using namespace std;
int main()
{
	int a[100], n, i;
	cout<<"Enter number of elements ";
	cin>> n;
	cout<<"Enter array elements ";
	for(i=0;i<n;i++)
	{
		cin>> a[i];
	}
	cout<<"Original array ";
	for(i=0;i<n;i++)
	{
		cout<<"["<<a[i]<<"]";
		if(i<n-1)
		cout<<"; ";
	}
	cout<<"\nReverse array: ";
	for(i=n-1;i>=0;i--)
	{
		cout<<"[" <<a[i]<<"]";
		if(i>0)
		cout<<"; ";
	}
	return 0;}

