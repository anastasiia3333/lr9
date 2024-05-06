#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	cout << resetiosflags(ios::dec) << setiosflags(ios::hex | ios::showbase) << 100 << endl;
	return 0;
}