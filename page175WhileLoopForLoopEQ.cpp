#include <iostream>
using namespace std;

/*  int i = 1;
    int sum = 0;
    while (sum < 10000)
    {
        sum = sum + i;
        i++;
    }
    cout << sum;

    //////////////////////////////////
    for (initial-action; loop-continuation-condition; action-after-each-iteration)
    
    is the same as

    initial-action;
    while (loop-continuation-condition)
     {
         // Loop body;
            action-after-each-iteration;
     }
    {
         // Loop body;
    }
    */

   //woo..  i actually like while loop better, for now

int main()
{
    int sum = 0;
    for (int i = 1; sum < 10000; i++)
    {
        sum += i;
    }
    cout << sum;
    return 0;
}
