#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>
#include <iomanip>

using namespace std;

void defaultValueFunc(int number = 1)//default value
{
    int answer = number * 7;
    std::cout << answer;
}

int main()
{
    defaultValueFunc();//if you dont put anything for the arguement to route to the actual parameter then the actual parameter will
                       //be (int number = 1) by default
    std::cout << endl;
    defaultValueFunc(12);
    return false;
}