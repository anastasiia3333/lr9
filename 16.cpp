#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    cout << setfill('#') << setw(10) << left << fixed << setprecision(2);
    ios::fmtflags flags = cout.flags();
    char fill = cout.fill();
    cout << 1000.5364 << endl;
    cout << "The fill character is " << fill << endl;
    if (flags & ios::right)
    {
        cout << "text-align: right" << endl;
    }
    else
    {
        cout << "text-align: left" << endl;
    }

    return 0;
}
