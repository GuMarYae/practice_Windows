#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>
#include <iomanip>

int tot(int num1, int num2)
{

    int total = num1 + num2;
    return total;
}
int playAround(int anotherFunction)
{
    int tot2 = anotherFunction * 3;
    return tot2;
}

int main()
{
    int number = 2;
    int number2 = 3;

    int number3 = tot(number, number2) + 5;
    std::cout << number3 << std::endl;
    std::cout<<playAround(tot(number,number2));
    system("pause>0");
}