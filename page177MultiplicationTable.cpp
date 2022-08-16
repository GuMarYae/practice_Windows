#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
    cout << setw(45) << "Multiplication Table\n";
    cout << "     1  2  3  4  5  6  7  8  9 \n";
    cout << "  ()()()()()()()()()()()()()()()\n";

    // show number title
    cout << "    |  ";

    for (int i = 1; i < 10; i++)
    {
        cout << "\n";
        cout << setw(3) << i;
        cout << " |";

        for (int j = 1; j < 10; j++)
        {
            cout << setw(3) << i * j;
        }
    }
    system("pause>0");
    return 0;
}