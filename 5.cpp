#include <iostream>
#include <cmath>
using namespace std;

int main ()
{
	cout.setf(ios::fixed);
	cout.precision(5);
	cout << "         x    ln(x)      log(x) " << "\n\n";
	for (int x = 2.0; x <= 100; x++)
	{
		cout.width(10);
		cout << x << " ";
		cout.width(10);
		cout << log(x) << " ";
		cout.width(10);
		cout << log10(x) << endl;
	}
	return 0;
}