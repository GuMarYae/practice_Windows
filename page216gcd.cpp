#include <iostream>
#include <ctime>
#include <cmath>
#include <cstdlib>
#include <iomanip>

int greatestCommonDenominator(int n1, int n2)
{
    int gcd = 1; // initial gcd should start at 1
    int k = 2;   // possible gcd should start at 2

    while (k <= n1 && k <= n2)
    {
        if (n1 % k == 0 && n2 % k == 0)
        {
            gcd = k;
        }
        k++;
    }
    return gcd; // that means that as long as the k is less or  equal
                // to n1 AND n2, the gcd will keep updating. when k reaches n1 && n2
                // it will cout the last highest updated gcd for both of n1 and n2.
}

int main()
{
    int n1;
    int n2;
    std::cout << "enter two numbers followed by space\n";
    std::cin >> n1 >> n2;

    std::cout << "The greatrest common denominator for " << n1 << " & " << n2 << " is " << greatestCommonDenominator(n1, n2);
    return 0;
}