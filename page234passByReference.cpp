#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>
#include <iomanip>

void passByReference(int &number1, int &number2)
{

    number1 = 12;
    number2 = 11;

    std::cout << number1 <<" and "<< number2;
}

int main()
{
    int number1 = 1, number2 = 2;

    int &refNumber1 = number1;
    int &refNumber2 = number2;

    std::cout << "These two should be the same as the two values in line 20, which is line 18, " << refNumber1 << " and " << refNumber2 << std::endl;
    std::cout << "\n";
    std::cout << "\"RefNmber1 and refNumber2\" can be passed in the passByReferencefunction in order to change number1 and number2 thats inside the main function\n";
    std::cout << "Since passByReference has &number1, int &number2, we can just pass the normal variables to it which will change the values inside int main \n";
    passByReference(number1, number2);
    std::cout << "\n";
    std::cout << "from here, its gonna go to the function line 13 before going to line 30 but line 30 should have the same value as line 13 now because we changed the reference value\n";

    std::cout << number1 << " and " << number2;

    system("pause>0");
}