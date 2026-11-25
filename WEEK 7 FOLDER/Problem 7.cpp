#include<iostream>
using namespace std;
class Test
{
	int values;
public:
	Test*setValue(int v)
	{
		this-> values= v;
		return this;
	}
	void display()
	{    
		cout<<"Value = "<<this->values;
	}
};
int main()
{
	Test obj;
	obj.setValue(50)->display();
	return 0;
} 
