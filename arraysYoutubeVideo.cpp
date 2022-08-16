#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>
#include <iomanip>

int main()
{
  int total;
  int myArray[11];

  for (int i = 0; i < 12; i++)
  {
    std::cout << "Enter a number for element " << i << " ! \n";
    std::cin >> myArray[i];
    std::cout << "element " << i << " is " << myArray[i] << "\n";
    total += myArray[i];
  }
  std::cout << "the total number for all array indexes is " << total;
}
