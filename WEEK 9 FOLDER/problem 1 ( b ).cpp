#include<iostream>
using namespace std;
int gcdRecursive(int a,int b)
{
	if(b==0)
    return a;
	return gcdRecursive(b,a%b);
}
int gcdNonRecursive(int a, int b)
{
	while(b!=0)
	{
		int rem=a%b;
		a=b;
		b=rem;
	}
	return a;
}
int main()
{
	int a, b;
	cout<<"Enter two numbers : ";
	cin>>a>>b;
	cout<<"Recursive GCD = "<< gcdRecursive(a,b)<<endl;
	cout<<"Non-Recursive GCD = "<< gcdNonRecursive(a,b)<<endl;
	return 0;
}
