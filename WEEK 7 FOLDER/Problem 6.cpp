#include <iostream>
#include <string>
using namespace std;

class Flight
{
	int flight_no;
	string source;
	string destination;
	float fare;
public:
	void setData(int f,string s,string d, float fr)
	{
		this->flight_no=f;
		this->source=s;
		this->destination =d;
		this->fare =fr;
	}
	void display()
	{
		cout<<"\nFlight Number: "<<this->flight_no ;
		cout<<"\nSource: "<<this->source;
		cout<<"\nDestination : "<<this->destination;
		cout<<"\nFare : "<<this->fare;
	}
};
int main()
{
	Flight f;
	f.setData(101,"Delhi","Mumbai",4500);
	f.display();
	return 0;
		
}
