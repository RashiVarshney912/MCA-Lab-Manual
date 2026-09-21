#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	float a,b,c,D,r1,r2;
	cout<<"Enter the value a,b,c : ";
	cin>>a>>b>>c;
	D=b*b-4*a*c;
	if (D>=0)
	{
		r1=(-b+sqrt(D))/(2*a*c);
		r2=(-b-sqrt(D))/(2*a*c);
		cout<<"Real roots are" << r1 << "and" << r2;
	}
	else if (D==0)
	{
		r1=-b/(2*a);
		cout<<"Equal root is" << r1;
	}
	else 
	{
		cout<<"Roota are imaginary";
	}
	return 0;
}

