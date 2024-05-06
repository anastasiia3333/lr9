#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    cout.setf(ios::uppercase | ios::showpoint | ios::scientific);
    cout << 0.00081565 << endl;

    return 0;
}

