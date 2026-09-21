#include<iostream>
using namespace std;

int main()
{
	int n, i=2, j , k;
	cout<<"Enter a number : ";
	cin>>n;
	while(i<=n)
	{
		j=1;
		k=0;
		while(j<=i)
		{
			if (i%j==0)
			    k++;
			j++;    
		}
	if(k==2)
	   cout<<i<< " ";
	i++;   	
}
	return 0;
}


