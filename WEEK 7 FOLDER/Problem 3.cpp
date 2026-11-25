#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n,i;
	float *p,a[100],sum=0,variance=0,sd,mean;
	cout<<"Enter number of elements : ";
	cin>>n; 
	p=a;
	cout<<"Elements are : ";
	for(i=0;i<n;i++)
	{
		cin>>*(p+i);
		sum+=*(p+i);
	}
	mean=sum/n;
	for(i=0;i<n;i++)
	{
		variance+=(*(p+i)-mean)*(*(p+i)-mean);
	}
	variance=variance/n;
	sd=sqrt(variance);
	cout<<"\nSum = "<<sum;
	cout<<"\nMean = "<<mean;
	cout<<"\nStandard deviation = "<<sd;
	return 0;
}
