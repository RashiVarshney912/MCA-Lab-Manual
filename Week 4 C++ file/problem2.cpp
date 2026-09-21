 #include<iostream>
using namespace std;

int main()
{
	int a,b,c;
	cout<<"Enter two Number: ";
	cin>>a>>b;
	while (b!=0)
	{
	  c =a&b;
	  a =a^b;
	  b =c<<1;
    }
	cout<<"Sum = " <<a;
	return 0;
}
