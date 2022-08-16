#include <iostream>
#include <cmath>
#include <ctime>
#include <string>
#include <iomanip>
#include <cstdlib>

/*
Normally when you pass an array to a function, you should also pass its size in another
argument, so that the function knows how many elements are in the array. Otherwise,
you will have to hard code this into the function or declare it in a global variable. Neither
is flexible or robust.
*/

void printArray(int[], int); // prototype
                             //you can just copy and past 
                             //void printArray(int list[], int arraySize)
                             //or just past it and delete the names like I did in the actual code


int main()
{
  int numbers[11] = {1, 7, 3, 9, 2, 4, 3, 77, 11, 90, 11};
  printArray(numbers, 11);//keep in mind that when invoking/calling an arrays variable name you dont add the brackets
                          //in other words, its numbers not numbers[]
  return 0;
}

void printArray(int list[], int arraySize)
{
  for (int i = 0; i < arraySize; i++)
  {
    std::cout << list[i] << std::endl; // again when using arrays, whether its a number in the [], or a variable name in the [
                                       // youre most likely gonna end up denoting the arrayname or arrayname in the parameter
                                       // this one went from list[], to list[i]
  }
}
