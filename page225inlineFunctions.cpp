#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>
#include <iomanip>

/*As far as programming is concerned, inline functions are the same as regular functions,
except they are preceded with the inline keyword. However, behind the scenes, the C++
compiler expands the inline function call by copying the inline function code

Inline functions are desirable for short functions but not for long ones that are called
in multiple places in a program, because making multiple copies will dramatically
increase the executable code size. For this reason, C++ allows the compilers to ignore
the inline keyword if the function is too long. So, the inline keyword is merely a
request; it is up to the compiler to decide whether to honor or ignore it.
*/

using namespace std;

inline void defaultValueFunc(int month, int year) // default value
{
    cout << "month is " << month<<" ";
    cout << "year is " << year;
}

int main()
{
    int month = 11;
    int year = 2022;

    
    defaultValueFunc(month, year);
    cout<<"\n";
    defaultValueFunc(8, 7);

    return false;
}