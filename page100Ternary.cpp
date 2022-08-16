#include <iostream>
using namespace std;

int main()
{

    int num1 = 12;
    int num2 = 17;

    int higherNum;
    cout << "enter a number ";
    cin >> higherNum;

    // if you dont put parens, it cont work. itll show an error for the > symbol and wont compile.
    cout << (higherNum > num2 ? num2 : num1) << endl;

    // or you can write it like this
    higherNum > num2 ? cout << " your new number went down to " << num2 << " since it was higher \n" : cout << " your new number went up to " << num1 << " since it was lower \n";

    return 0;
}