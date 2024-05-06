#include <iostream>
using namespace std;

class box
{
    int size;

public:
    box(int s) : size(s) {}
    friend ostream &operator << (ostream &os, const box &b);
};

ostream &operator << (ostream &os, const box &b)
{
    for (int i = 0; i < b.size; ++i)
    {
        for (int j = 0; j < b.size; ++j)
        {
            os << "0 ";
        }
        os << endl;
    }
    return os;
}

int main()
{
    box square(10);
    cout << "Square:\n" << endl;
    cout << square;

    return 0;
}
