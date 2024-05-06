#include <iostream>
#include <cstring>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    cout << fixed << setprecision(5) << right;

    cout << setw(10) << "x" << setw(10) << "ln(x)" << setw(10) << "log(x)" << endl;
    for (int i = 2; i <= 100; ++i)
    {
        cout << setw(10) << i << setw(10) << log(i) << setw(10) << log10(i) << endl;
    }

    return 0;
}


// const int SIZE = 80;

// void center(const char *s)
// {
//     cout << right << setw((SIZE + strlen(s)) / 2) << s << endl;
// }

// int main()
// {
//     cout << string(SIZE, '-') << endl;
//     center("Good morning! Have a nice day.");
//     cout << string(SIZE, '-') << endl;

//     return 0;
// }
