#include<iostream>
using namespace std;
int main()
{
	int a[100], b[100],c[200],n1, n2,i,j,k;
	cout<<"Number size of first array: ";
	cin>>n1;
	cout<<"Enter first sorted array: ";
	for(i=0;i<n1;i++)
	{
		cin>>a[i];
	}
	cout<<"Number size of second array: ";
	cin>>n2;
	cout<<"Enter second sorted array: ";
	for(i=0;i<n2;i++)
	{
		cin>>b[i];
	}
	i=0;
	j=0;
	k=0;
	while(i<n1 && j<n2)
	{
		if(a[i]<= b[j])
		{
			c[k]=a[i];
			i++;
		}
		else
		{
			c[k]=b[j];
			j++;
		}
		k++;
	}
	while(i<n1)
	{
		c[k]=a[i];
		i++;
		k++;
	}
	while(j<n2)
	{
		c[k]=b[j];
		j++;
		k++;
	}
	cout<<"Merged sorted array: ";
	for(i=0;i<k;i++)
	{
		cout<<c[i]<<" ";
	}
	return 0;
}
