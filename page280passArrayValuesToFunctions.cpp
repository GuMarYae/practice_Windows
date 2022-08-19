#include <iostream>
#include <ctime>
#include <cmath>
#include <string>
#include <cstdlib>
#include <iomanip>

// NOTE if you dont want to have values changed, put a const in the m function and youll see that it wont compile.

void m(int, int[]);//proto

int main()
{
    int x = 1;
    int y[10];
    y[1] = 777;
    m(x, y);
    // SO AFTER LINE 12, IT GOES TO THE FUNCTION TO GET THE VALUES, COMES BACK TO INT MAIN FROM 14 ABD ON DOWN
    std::cout << "x is  " << x << " and y 1 is " << y[1] << ". X doesnt change because the only way for that to change is to get the initial value for it with the * symbol"
              << ". We didnt want that anyway. We wanted to see y change. it changed because you can initialize it inside the m function which will effect the array outside the m function"
              << ". This is passing by value";
    system("pause>0");
    return 0;
}
void m(int x, int y[]) // these dont have to have the same name as the ones in int main. I just named them this for convention
{
    x = 2;
    y[1] = 8335;
}