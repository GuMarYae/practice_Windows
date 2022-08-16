#include <iostream>
#include <cmath>
#include <ctime>
#include <iomanip>
#include <cstdlib>

/*
the point of this one is the const int SIZE.
its easier to use these because you can just change the size in line 14
and you dont have to change anything else i9n the code
in the other code, without const int SIZE, if you were to change the array size,
you would have to change the value as well in the forloop
and more if the code was actually bigger

also, in the forloop, in line 25, you can put array[SIZE] or just size.
Since array[SIZE] is actually SIZE
that means they are the same thing

NOTE::====> THIS WORKS SOMETIMES. AS SEEN IN ARRAY VIDEO 3, WHEN I PUT for (int i = 1; i <= myArr[MY_LIST]; i++)
IT DIDNT PRINTOUT THE CORRECT VALUES
SO ITS PROBABLY ALWAYS SAFE TO PUT THE "CONST INT VARIABLE, ALWAYS"

NOTE THE REASON WHY ITS BEST TO PUT THE CONST VARIABLE IS BECAUSE THE VALUES DONT CHANGE!!!!
I TOOK AWAY THE CONST AND THE VALUES MESSED UP
I ALSO PUT THE CODE IN VISUAL STUDIO WITH myArr[MY_LIST] FROM VIDEO 3 AS WELL AS array[SIZE] FROM THIS CODE
CAME UP WITH ERRORS. FOR THIS ONE IT STILL COMPILED BUT IT HAD ERRORS ABOUT LOSS OF DATA

C6385	Reading invalid data from 'array'.
C6001	Using uninitialized memory 'array'.
C6201	Index '10' is out of valid index range '0' to '9' for possibly stack allocated buffer 'array'.

SO LONG STORY SHORT, JUST MAKE THE CONSTANT VARIABLE FIRST AND USE THE CONSTANT VARIABLE ANME INSIDE THE FORLOOP, ALWAYS


*/

int main()
{

  const int SIZE = 10;
  int array[SIZE]; // this is basically saying array[10] or whatever you put SIZE as
  int total;

  for (int i = 0; i < array[SIZE]; i++)
  {
    std::cout << "Enter a value for element " << i << std::endl;
    std::cin >> array[i]; // in a sentence this means the index of array..  " I wanna take the index of array"
    std::cout << "element " << i << " now has a value of " << array[i] << std::endl;
    total += array[i];
  }
  std::cout << "the total value for all indexes is " << total;
  return 0;
}
