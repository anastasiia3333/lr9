#include <iostream>
using namespace std;

int main()
{
    ios::fmtflags flags = cout.flags();
    cout.setf(ios::hex, ios::basefield);
    cout.setf(ios::showbase);
    cout << 100 << endl;
    cout.flags(flags);
    cout << 100 << endl;

    return 0;
}

