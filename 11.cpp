#include <iostream>
#include <cstring>
#include <cstdlib>
#include <string>
using namespace std;

class strtype
{
	char *p;
	int len;
public:
	strtype();
	strtype(const char *ptr);
	~strtype() { delete []p; }
	friend ostream &operator << (ostream &stream, strtype &obj);
	friend istream &operator >> (istream &stream, strtype &obj);
};

strtype::strtype()
{
	p = new char(1);
	if(!p)
	{
		cout << "Allocation error\n";
		exit(1);
	}
	p[0] = '\0';
}

strtype::strtype (const char *ptr)
{
	len = strlen (ptr) + 1;
	p = new char (len);
	if (!p)
	{
		cout << "Allocation error\n";
		exit(1);
	}
	strcpy(p, ptr);
}

ostream &operator << (ostream &stream, strtype &obj) 
{
	stream << obj.p;
	return stream;
}

istream &operator >> (istream &stream, strtype &obj) 
{
	string inp;
	getline(stream, inp);
	delete[] obj.p;
	obj.p = new char[inp.length() + 1];
    strcpy(obj.p, inp.c_str());
    return stream;

}

int main()
{
	strtype s1, s2;
	cout << "Enter first string: ";
    cin >> s1;
    cout << "Enter second string: ";
    cin >> s2;

    cout << "First string: " << s1 << endl;
    cout << "Second string: " << s2 << endl;

	return 0;
}