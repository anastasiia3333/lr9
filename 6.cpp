#include <iostream>
#include <cstring>
using namespace std;

const int SIZE = 80;
void center(const char *s) 
{
	cout.width((SIZE + strlen(s)) / 2);
	cout << s << endl;
}

int main()
{ 
	cout << string(SIZE, '-') << endl;
	center("Good morning! Have a nice day.");
	cout << string(SIZE, '-') << endl;
	return 0;
}

