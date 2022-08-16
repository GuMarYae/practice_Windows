#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>
#include <iomanip>

using namespace std;

void loopFunction(int number1, int number2)
{

    for (int i = number1; i < number2; i++)
    {

        std::cout << "wassuuuup\n"<<i;
    }
}

int main()
{
    cout << "enter a number\n";
    int integer1;
    int integer2;
    cin >> integer1;
    cout << "enter another number\n";
    cin >> integer2;
    loopFunction(integer1, integer2);

    return 0;
}

//if you look at thyis code, its basically a forloop as a function