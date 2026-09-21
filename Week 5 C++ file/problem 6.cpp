#include<iostream>
using namespace std;
int main()
{
	int a[10][10], b[10][10], sum[10][10], multi[10][10], r, c, i, j, k ;
	cout<<"Enter rows and column: ";
	cin>>r>>c;
	cout<<"Enter first matrix: "<< endl;
	cout<<"\n[";
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			cin>>a[i][j];
			
		}
		
	}
	cout<<"]\n";
	cout<<"Enter second matrix: "<<endl ;
	cout<<"\n[";
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			cin>> b[i][j];
			
		}
		
	}
	cout<<"]\n";
	
	//Addition
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			sum[i][j]=a[i][j]+b[i][j];
		}
	}
	cout<<"Matrix Addition: ";
	for(i=0;i<r;i++)
	{
		cout<<"\n[";
		for(j=0;j<c;j++)
		{
			cout<<sum[i][j]<<" ";
		}
		cout<<"]\n";
	}
	//Multiplication
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			multi[i][j]=0;
			for(k=0;k<c;k++)
			{
				multi[i][j]+=a[i][k]*b[k][j];	
			}
			
		}
	}
	cout<<"\nMatrix Multiplication: ";
	for(i=0;i<c;i++)
	{
		cout<<"\n[";
		for(j=0;j<c;j++)
		{
			cout<<multi[i][j]<<" ";
		}
		cout<<"]\n";
	}
	return 0;
}
