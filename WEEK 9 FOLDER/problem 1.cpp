#include<iostream>
using namespace std;
int factorialRecursive(int n)
{
	if (n==0 || n==1)
	return 1;
	return n* factorialRecursive(n-1);
}
int factorialNonRecursive(int n)
{
	int fact=1;
	for(int i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	
	return fact;
}
int main()
{
	int n;
	cout<<"Enter a number : ";
	cin>>n;
	if (n<0)
	{
	    cout<<"Factorial is not defined for negative numbers.";
		return 0;
	}
	cout<<"\nRecursive factorial = "<<factorialRecursive(n);
	cout<<"\nNon-recursive factorial = "<<factorialNonRecursive(n);
	return 0;
}
