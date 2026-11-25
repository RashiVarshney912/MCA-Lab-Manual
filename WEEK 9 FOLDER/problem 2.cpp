#include<iostream>
using namespace std;
void hanoiRecursive(int n, char A, char B, char C)
{
	if(n==1)
	{
		cout<<"\nMove disk 1 from "<< A << " to " << C;
		return;
	}
	hanoiRecursive(n-1,A,C,B);
	cout<<"\nMove disk "<< n << " from "<< A << " to "<< C;
}
int main()
{
	int n;
	cout<<"Enter number of disks: ";
	cin>>n;
	cout<<"\nRecursive Solution: \n";
	if(n>0)
	{
		hanoiRecursive(n,'A','B','C');
		return 0;
	}
}
