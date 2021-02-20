#include <iostream>

using namespace std;

class Date {
private:
    int year;
    int month;
    int day;

public:
    Date(int x, int y, int z) :year(x), month(y), day(z) {}
    friend class Time;
};

class Time

{

private:

    int hour;

    int minute;

    int second;

public:

    Time(int hh, int mm, int ss) :hour(hh), minute(mm), second(ss) {}

    void display(Date &a) {
        cout << a.year << '/' << a.month << '/' << a.day << endl;
        cout << hour << ':' << minute << ':' << second;
    }

};


int main()

{

    int year, month, day;

    cin >> year >> month >> day;

    Date d1(year, month, day);

    int hour, minute, second;

    cin >> hour >> minute >> second;

    Time t1(hour, minute, second);

    t1.display(d1);

    return 0;

}