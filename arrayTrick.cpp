#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>
#include <iomanip>

/*basically, i is 1, its counts less than 6 and after  a loop of the body of the
  forloop completes, i increments by 1.
  list[i] = list[i - 1] means that i = i - 1 or 1 = 1 - 1 which is 0;
  so now i is 0. since we attached i(which is 0) to list..  list[0]
  its gonna print out the value in the 0th index.
  now i++ activates and i++ means i becomes 1 again and the loop starts over.
  since it l keeps subtracting on line 22, its gonna keep printing out the 0th
  index until the forloop reaches 5.
*/

int main()
{
  int list[] = {10, 2, 3, 4, 5, 6};
  for (int i = 1; i < 6; i++)
  {
    list[i] = list[i - 1]; 
    std::cout << list[i] << " ";
  }
  int math = 1;
  math -= 1;
  std::cout << math;
  return 0;
}



