#include <iostream>
using namespace std;

int main()
{
    int number = 100;
    cout << "Decimal: " << number << endl;
    cout.unsetf(ios::dec);
    cout.setf(ios::hex);
    cout << "Hex: " << number << endl;
    cout.unsetf(ios::hex);
    cout.setf(ios::oct);
    cout << "Octal: " << number << endl;

    return 0;
}
