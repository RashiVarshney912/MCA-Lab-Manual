#include<iostream>
using namespace std;
int main()
{
	int a[100],n,i,largest,second ;
	cout<<"Enter number of elements: ";
	cin>>n;
	cout<<"Enter array elements: ";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	largest=a[0];
	second=a[0];
	for(i=1;i<n;i++)
	{
		if(a[i]>largest)
		{
			second=largest;
			largest=a[i];
		}
		else if (a[i]>second && a[i]!=largest)
		{
			second=a[i];
		}
		
	}
	cout<<"Largest number = " <<largest << endl;
	cout<<"Second largest number = " << second;
	return 0;
}
