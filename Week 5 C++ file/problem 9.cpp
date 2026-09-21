#include<iostream>
using namespace std;
int main()
{
	int a[10],n,i,num,count=0;
	cout<<"Enter number of elements: ";
	cin>> n;
	cout<<"Enter array elements: ";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"Enter number to find frequency: ";
	cin>> num;
	for(i=0;i<n;i++)
	{
		if(a[i]==num)
		{
			count++;
		}
	}
	cout<<"Frequency of "<<num<<" = "<<count;
	return 0;
}
