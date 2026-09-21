#include<iostream>
using namespace std;
int main()
{
	int a ;
	int *p ;
	cout<<"Enter a number : ";
	cin>> a;
    p=&a;
	cout<<"\nOrignal value : " << *p;
	*p+=1;
	cout<<"\nAfter Increment : " <<*p;
	*p-=1;
	cout<<"\nAfter Decrement : " <<*p;
	return 0;
}
