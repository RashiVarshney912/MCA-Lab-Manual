#include<iostream>
using namespace std;
class Number
{
	int a,b;

public:
	void setData(int x,int y)
	{
		this->a=x;
		this->b=y;
	}
	int greatest()
	{
		if(this->a > this->b)
		    return this->a;
		else
		    return this->b;
	}
};
int main()
{
	Number n;
	n.setData(729,502);
	cout<<"Greatest number = "<<n.greatest();
	return 0;
}
