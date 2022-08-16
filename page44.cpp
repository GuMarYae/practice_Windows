#include <iostream>
using namespace std;

// display time given the seconds

int main()
{
    int seconds;
    cout << "enter number of seconds ";
    cin >> seconds;
    // convert to minutes
    int minutes = (seconds / 60);
    cout << minutes << " minutes and ";
    // the remaining seconds
    // that means whatever number entered for seconds, this equation will
    // calculate the remainder..  500%60seconds is 20 in the remainder
    int remainingSeconds = (seconds % 60);
    cout << remainingSeconds << " seconds";

    return 0;
}