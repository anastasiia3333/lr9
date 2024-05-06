#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int number = 100;
    cout << "Decimal: " << number << endl;
    cout << "Hex: " << hex << number << endl;
    cout << "Octal: " << oct << number << endl;

    return 0;
}


// int main()
// {
//     cout << setfill('*') << setw(20) << left << fixed << setprecision(2) << 1000.5364 << endl;

//     return 0;
// }

