#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>
#include <iomanip>

using namespace std;

// Prototypes
int prototypeFunction();
void prototypeFunction2(int num);
// So youre basically copying and pasting the headers of both functions and puttung them before the main(*)
// literally copying and pasting
// only thing diferent is that youre putting a colon at the end of the prototype BC its a statement..  A declaration but still a statement

int main()
{

    prototypeFunction();
    prototypeFunction2(7);

    if (prototypeFunction())
    {
        cout << endl
             << "we good";
    }
}

int prototypeFunction()
{

    if (1 > 2)
    {
        return true;
    }
    else
        return false;
}

void prototypeFunction2(int num)
{

    std::cout << endl
              << "Im below int main!";
}