#include <iostream>
#include <ctime>
using namespace std;

class watch
{
    int hours;
    int minutes;
    int seconds;

public:
    watch()
    {
        time_t currentTime = time(nullptr);
        tm *localTime = localtime(&currentTime);
        hours = localTime->tm_hour;
        minutes = localTime->tm_min;
        seconds = localTime->tm_sec;
    }

    friend std::ostream &operator<<(std::ostream &os, const watch &w)
    {
        os << w.hours << ":" << w.minutes << ":" << w.seconds;
        return os;
    }
};

int main()
{
    watch myWatch;
    cout << myWatch;

    return 0;
}
