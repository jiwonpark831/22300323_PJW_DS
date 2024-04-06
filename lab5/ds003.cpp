#include <iostream>
using namespace std;

int main()
{
    int month, day;
    int day_count;

    cin >> month >> day;

    if (month == 1)
        day_count = day;

    else if (month == 2)
        day_count = 31 + day;

    else if (month == 3)
        day_count = 31 + 28 + day;

    else if (month == 4)
        day_count = 31 + 28 + 31 + day;

    else if (month == 5)
        day_count = 31 + 28 + 31 + 30 + day;

    else if (month == 6)
        day_count = 31 + 28 + 31 + 30 + 31 + day;

    else if (month == 7)
        day_count = 31 + 28 + 31 + 30 + 31 + 30 + day;

    else if (month == 8)
        day_count = 31 + 28 + 31 + 30 + 31 + 30 + 31 + day;

    else if (month == 9)
        day_count = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + day;

    else if (month == 10)
        day_count = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + day;

    else if (month == 11)
        day_count = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + day;

    else if (month == 12)
        day_count = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30 + day;

    cout << day_count << endl;
}