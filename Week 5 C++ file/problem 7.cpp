#include<iostream>
using namespace std;
int main()
{
	int a[100],n,i, positive=0,negative=0,odd=0,even=0;
	cout<<"Enter number of elements: ";
	cin>>n;
	cout<<"Enter array elements: ";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
		if(a[i]>0)
		{
			positive++;
		}
		else if(a[i]<0)
		{
			negative++;
		}
	    if(a[i]%2==0)
	    {
		even++;
		
	    }
	    else
	    {
		odd++;
		}	
	}
	cout<<endl;
	cout<<"Positive numbers = "<<positive<<endl;
	cout<<"Negative numbers = "<<negative<<endl;
	cout<<"Even numbers = "<<even<<endl;
	cout<<"Odd numbers = "<<odd<<endl;
	return 0;
}
