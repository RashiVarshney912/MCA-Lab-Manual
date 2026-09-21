 #include<iostream>
using namespace std;

int main ()
{
	int n,a=0,b=1,c,i=1;
	cout<<"Enter number of terms: ";
	cin>>n;
	while(i<=n)
	{
		c=a+b;
		a=b;
		b=c;
		i++;
		cout<< c << " ";
	}
      
	return 0;	
}
