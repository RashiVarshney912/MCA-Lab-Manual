#include<iostream>
using namespace std;
int main()
{
	int n,i,sum=0,a[100],*p;
	cout<<"Enter number of elements : ";
	cin>>n;
	p=a;
	cout<<"Enter array Elements : ";
	for(i=0;i<n;i++)
	{
		cin>> *(p+i);
	}
	for(i=0;i<n;i++)
	{
		sum+=*(p+i);
	}
	cout<<"Sum of numbers is " << sum ;
	return 0;
}
