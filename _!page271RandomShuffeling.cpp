#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>
#include <iomanip>
#include <string>
/*
❗❗❗❗❗❗❗❗❗❗❗❗❗❗❗❗❗❗❗❗
❗❗❗❗❗❗❗❗❗❗❗❗❗❗❗❗❗❗❗❗

//dont quite understand yet PAGE 271

❗❗❗❗❗❗❗❗❗❗❗❗❗❗❗❗❗❗❗❗
❗❗❗❗❗❗❗❗❗❗❗❗❗❗❗❗❗❗❗❗
*/


int main()
{

  const int A_SIZE = 10;
  int myList[A_SIZE];

  srand(time(0));

  for (int i = 0; i < A_SIZE; i++)
  {
    std::cout << "Enter 10 numbers followed by \"ENTER\" after each single number \n";
    std::cin >> myList[i];
  }

  for (int i = A_SIZE - 1; i > 0; i--)
  {
    // Generate an index j randomly with 0 <= j <=i
    int j = rand() % i + 1;
    std::cout << myList[i] << std::endl;
     // Swap myList[i] with myList[j]
    double temp = myList[1];
    myList[i] = myList[j];
    myList[j] = temp;
    // std::cout <<myList[j];
  }

  return 0;
}