#include <iostream>
using namespace std;

class Number
{
private:
    int number;
    int LargestDivisor;

public:
    Number() : number(0), LargestDivisor(1) {}
    Number(int num) : number(num)
    {
        LargestDivisor = largestDivisor();
    }

    int largestDivisor()
    {
        for (int divisor = number / 2; divisor > 1; divisor--)
        {
            if (number % divisor == 0)
            {
                return divisor;
            }
        }
        return 1;
    }

    friend istream &operator>>(istream &in, Number &obj)
    {
        in >> obj.number;
        obj.LargestDivisor = obj.largestDivisor();
        return in;
    }

    friend ostream &operator<<(ostream &out, const Number &obj)
    {
        out << "Number: " << obj.number << endl;
        out << "The largest divisor of " << obj.number << " is " << obj.LargestDivisor << endl;
        return out;
    }
};

int main()
{
    Number num;
    cout << "Enter number: ";
    cin >> num;
    cout << num;
    
    return 0;
}
