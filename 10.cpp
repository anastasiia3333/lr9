#include <iostream>
using namespace std;

class planet 
{
protected: 
	double distance;
	int revolve;
public:
	planet (double d, int r)
	{
		distance = d; 
		revolve = r;
	}
};

class earth : public planet 
{
	double circumference;
public:
	earth(double d, int r) : planet (d, r)
	{
		circumference = 2 * distance * 3.1416;
	}

	friend ostream &operator << (ostream &stream, const earth &obj);
};

ostream &operator << (ostream &stream, const earth &obj) 
{
	stream << "Distance from sun: " << obj.distance << endl;
	stream << "Days in orbit: " << obj.revolve << endl;
	stream << "Circumference of orbit: " << obj.circumference << endl;
	return stream;
}

int main()
{
	earth obj(93000000, 365);
	cout << obj;
	return 0;
}
