#include <iostream>
using namespace std;
#include <cstdlib> // means C++ Standard Library header file this allows us to change the seed from number 1 (default)
                   //to any random number which allows the srand(seed) to output any random number

// the reason why we put time(0) inside srand(seed) because srand(time(0)) means starting from 0, its gonna put out whatever number
// time() is in seconds

int main()
{
    srand(time(0));
    int number1 = rand() % 100;
    int number2 = rand() % 100;
    int temp;
    cout << rand() << endl;

    // cin >> number1 >> number2;

    if (number1 > number2)
    {
        number1 - number2;
    }
    else if (number1 < number2)
    {
        temp = number1;
        number1 = number2;
        number2 = temp;
        number1 - number2;
    }
    cout << "What is " << number1 << " - " << number2 << " ? ";
    int attempt = 0;
    int answer = number1 - number2;
    cin >> attempt;
    if (attempt == number1 - number2)
    {
        cout << "correct ";
    }
    else
        cout << "nope. the correct answer is " << answer;

    return 0;
}