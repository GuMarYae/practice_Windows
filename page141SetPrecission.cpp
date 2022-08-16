#include <iostream>
#include <cstdlib>
#include <ctime>

#include <iomanip>
/*
with iomanipulation enabled, you can use

Operator Description

setprecision(n)  sets the precision of a floating-point number
fixed            displays floating-point numbers in fixed-point notation (scientific notation)
showpoint        causes a floating-point number to be displayed with a decimal point
                   with trailing zeros even if it has no fractional part
setw(width)      specifies the width of a print field
left             justifies the output to the left
right            justifies the output to the right
*/

using namespace std;

int main()
{

    double amount = 12618.98;
    double interestRate = 0.0013;
    double interest = amount * interestRate;
    cout << "Interest is " << fixed << setprecision(2)
         << interest << endl;

    // notice how setprescission rounds the numbers as well as not showing the numbers after desired prescission number
    double number = 12.34567;
    cout << setprecision(3) << number << " "
         << setprecision(4) << number << " "
         << setprecision(5) << number << " "
         << setprecision(6) << number << endl;

    cout << setw(8) << "C++" << setw(6) << 101 << endl;
    cout << setw(8) << "Java" << setw(6) << 101 << endl;
    cout << setw(8) << "HTML" << setw(6) << 101 << endl;
    return 0;
}