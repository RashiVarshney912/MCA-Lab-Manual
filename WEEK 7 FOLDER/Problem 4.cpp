#include<iostream>
#include<string>
using namespace std;
class pntr_obj
{
	int roll_no;
	string name;
public:
	void set_data(int r,string n) 
	{
		this->roll_no =r;
		this->name=n;
	}
	void print()
	{
		cout<<"\nRoll no"<<this->roll_no;
		cout<<"\nName: "<<this->name;
		cout<<"\nObject address: "<<this;
		
	}
};
int main()
{
	pntr_obj obj1,obj2,obj3;
	obj1.set_data(1,"Rashi");
	obj2.set_data(2,"Neha");
	obj3.set_data(3,"Priya");
	obj1.print();
	obj2.print();
	obj3.print();
	return 0;	
}
