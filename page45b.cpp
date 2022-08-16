// If today is Tuesday, what day will it be in 100 days?

#include <iostream>
using namespace std;

int main()
{
    // since monday is 1, tuesday is day 2
    // 100 days from tuesday
    int daysTot = (2 + 100);
    // to make days reset every 7 days while counting up to 100 day
    int day = daysTot % 7;

    cout << day;
}
