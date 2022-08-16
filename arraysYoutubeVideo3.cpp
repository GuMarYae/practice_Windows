#include <iostream>
#include <cmath>
#include <ctime>
#include <iomanip>
#include <cstdlib>

int main()
{
    const int MY_LIST = 10;
    int myArr[MY_LIST] = {1, 3, 4, 4, 7, 8, 10, 33, 11, 34};
    double max = myArr[0];
    int indexOfMax = 0;

    for (int i = 1; i < MY_LIST; i++)
    {
        if (myArr[i] > max)
        {
            max = myArr[i];
            indexOfMax = i;
        }
    }
    std::cout << "Max is " << max << " and the index of it is " << indexOfMax;
    return 0;
}
