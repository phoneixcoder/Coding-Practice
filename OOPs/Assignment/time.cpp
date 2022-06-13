#include <iostream>
using namespace std;

class Time
{

private:
    int hours;
    int minutes;
    int seconds;

public:
    Time()
    {
        hours = 0;
        minutes = 0;
        seconds = 0;
    }

    Time(int hours, int minutes, int seconds)
    {
        this->hours = hours;
        this->minutes = minutes;
        this->seconds = seconds;
    }

    void Display(Time time)
    {
        int p;
        if (time.hours >= 12)
        {
            p = time.hours - 12;
            if (p == 0)
            {
                cout << p << ":" << time.minutes << ":" << time.seconds << " am" << endl;
                return;
            }
            cout << p << ":" << time.minutes << ":" << time.seconds << " pm" << endl;
            return;
        }
        cout << time.hours << ":" << time.minutes << ":" << time.seconds << " am" << endl;
        return;
    }

    void add(Time t1, Time t2)
    {
        if (t1.seconds + t2.seconds >= 60)
        {
            int extramin = (t1.seconds + t2.seconds) / 60;
            t1.minutes += extramin;
            t1.seconds = 60 * extramin - (t1.seconds + t2.seconds);
        }
        else
        {
            t1.seconds = t1.seconds + t2.seconds;
        }

        if (t1.minutes + t2.minutes >= 60)
        {
            int extrahours = (t1.minutes + t2.minutes) / 60;
            t1.hours += extrahours;
            t1.minutes = 60 * extrahours - (t1.minutes + t2.minutes);
        }
        else
        {
            t1.minutes += t2.minutes;
        }

        t1.hours += t2.hours;

        return;
    }
};

int main()
{
    return 0;
}