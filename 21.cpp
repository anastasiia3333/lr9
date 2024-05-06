#include <iostream>
using namespace std;

class Convert
{
    double ft;
    double cm;

public:
    void set(double f)
    {
        ft = f;
        cm = f * 30.48;
    }

    friend istream &operator >> (istream &is, Convert &obj);
    friend ostream &operator << (ostream &os, const Convert &obj);
};

istream& operator >> (istream& is, Convert& obj) {
    double inputFt;
    cout << "Enter the number in ft: ";
    is >> inputFt;
    obj.set(inputFt);
    return is;
}

ostream& operator << (ostream& os, const Convert& obj) {
    os << "The number in cm: " << obj.cm << " cm";
    return os;
}

int main()
{
    Convert obj;
    cin >> obj;
    cout << obj;

    return 0;
}
