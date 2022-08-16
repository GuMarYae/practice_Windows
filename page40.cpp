/*Step 1: Declare a double variable named miles with initial value 100.
Step 2: Declare a double constant named KILOMETERS_PER_MILE with value
1.609.
Step 3: Declare a double variable named kilometers, multiply miles and
KILOMETERS_PER_MILE, and assign the result to kilometers.
Step 4: Display kilometers to the console.
What is kilometers after Step 4?
*/
#include <iostream>
using namespace std;

int main()
{
    double miles = 100;
    const double KILOMETERS_PER_MILE = 1.609;
    double kilometers = miles * KILOMETERS_PER_MILE;

    cout << kilometers << endl;
    cout << "the size is " << sizeof(kilometers) << " in bytes";
    return 0;
}