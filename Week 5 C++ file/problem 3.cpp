#include<iostream>
using namespace std;
int main()
{
	int a[100],i,n ;
	cout<<"Enter number of elements : ";
	cin>>n;
	cout<<"Enter array Elemets : ";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"Length of array is " << n;
	
	return 0;
}
