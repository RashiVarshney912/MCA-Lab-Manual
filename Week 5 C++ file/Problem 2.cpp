#include<iostream>
using namespace std;
int main()
{
	int a[100],n , i, sum=0;
	cout<<"Enter number of Elements ";
	cin>>n;
	cout<<"Enter array elements ";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
	cout<<"Sum of all arrays ";
	
	for(i=0;i<n;i++)
		{
			sum+=a[i];
		}
		
		
		cout<<"Sum = " <<sum;
	  
	 return 0;
}
