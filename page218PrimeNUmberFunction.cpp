#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>
#include <iomanip>
using namespace std;

bool isPrime(int number)
{
    for (int divisor = 2; divisor <= number / 2; divisor++)
    {
        if (number % divisor == 0)
        {
            // so if a number mod 2 (since we started with 2) is 0, we know that the number that was generated is not a prime number
            return false; // or you can write 0. theyre the dame thing

        }// if you put else return true;  it will count 1 3 5 7 9 11 ...99
         //will have to look and check out why, because if this were up to me, ide put an else statement and be confused to why its counting like that

        
    }
    return true; // or you can write 1
                 //but notice how we didnt put retuen 0.. Im guessing return 0 this whole time in the main function , main(), meant return false, or stop;
}

void printPrimeNumbers(int numberOfPrimes)
{
    const int NUMBER_OF_PRIMES = 50;
    const int NUMBER_OF_PRIMES_PER_LINE = 10;
    int count = 0;  // counting the number of primes, starting at 0
    int number = 2; // a number to be tested to see if its a priume, starting at 2

    while (count < numberOfPrimes)
    {
        if (isPrime(number) == true) // using the isPrime() function with number being the ACTUAL PARAMETER (or arguement)
                                     // So, you can use a function and it doesnt have to be the same pre parameter like isPrime(int number), for example
                                     // in this block of code, its using number from line26 and not int number from line 7.
                                     // How the function runs (line 10 to 16) remains the same because thats what you want for the new parameter
                                     // You just want the function with a new arguement (actual parameter)
        {
            count++; // increase the count

            if (count % NUMBER_OF_PRIMES_PER_LINE == 0)
            {
                // print the current number and advance to the new line
                std::cout << setw(4) << number << endl;
            }
            else
                std::cout << setw(4) << number;
        }
        // check if the nuxt number is prime
        number++;
        /*cout << endl
            << "number now equals " << number << "\n";
       */
    }
}

int main()
{

    std::cout << "The first 50 prime numbers are\n";
    printPrimeNumbers(50);

    return 0;
}