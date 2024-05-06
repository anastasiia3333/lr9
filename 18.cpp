#include <iostream>
using namespace std;
#define SIZE 10

class stack
{
    char stck[SIZE];
    int tos;

public:
    stack();
    void push(char ch);
    char pop();
    friend ostream &operator << (ostream &os, const stack &s);
};

stack::stack()
{
    tos = 0;
}

void stack::push (char ch)
{
    if (tos == SIZE)
    {
        cout << "Stack is full\n";
        return;
    }
    stck[tos] = ch;
    tos++;
}

char stack::pop()
{
    if (tos == 0)
    {
        cout << "Stack is empty\n";
        return 0;
    }
    tos--;
    return stck[tos];
}

ostream &operator << (ostream &os, const stack &s)
{
    for (int i = 0; i < s.tos; ++i)
    {
        os << s.stck[i] << " ";
    }
    return os;
}

int main()
{
    stack s;
    s.push('1');
    s.push('2');
    s.push('3');
    s.push('4');
    s.push('5');
    s.push('6');
    s.push('7');
    s.push('8');
    s.push('9');
    s.push('2');
    s.push('0');
    cout << "Stack contains: " << s << endl;

    return 0;
}
