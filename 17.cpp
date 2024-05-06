#include <iostream>
using namespace std;

class pwr 
{
	int base;
	int exponent;
	double result;
public:
	pwr (int b, int e);
	friend ostream &operator << (ostream &os, const pwr &p);
	friend istream &operator >> (istream &is, pwr &p);
};

pwr::pwr (int b, int e)
{
	base = b;
	exponent = e;
	result = 1;
	for ( ; e; e--)
		result = result * base;
}

ostream &operator << (ostream &os, const pwr &p) 
{
	os << p.base << " ^ " << p.exponent << " = " << p.result;
    return os;
}

std::istream &operator>>(istream &is, pwr &p)
{
    std::cout << "Enter base: ";
    is >> p.base;
    cout << "Enter exponent: ";
    is >> p.exponent;
    p = pwr(p.base, p.exponent);
    return is;
}

int main()
{
    pwr obj(5, 2);
    cout << obj << endl;
    cin >> obj;
    cout << obj << endl;

    return 0;
}
