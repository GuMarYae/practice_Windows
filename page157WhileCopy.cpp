#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cmath>
#include <string>

// added MAXCOUNT so that count can exit the while loop by eventually equalling MAXCOUNT
// made a while loop of while(true){} and slapped the whole code inside of the {} to see if anything breaks or succeeds
//+++++++++++> it succeeded. looked for it to ask to enter a. if a is entered the count will increment by 1, and itll ask again to repeat ther process.
// so now I can mak an if statement stating that if a IS NOT entered, itll go back without incrementing count.
//+++++++++++> made an else instead followed by a decriment which is optional

// NOTE ... BIG BIG NOTE!!!   WHEN DOING A WHILE LOOP, MAKE SURE YOU WRITE THE STATEMENT BEFORE INCREMENTING OR DECREMENTING  .. dONT KNOW WHY YET BUT IT LOOPED WHEN i PUT COUNT++ .. ALWAYS PUT COUNT++ LAST.
using namespace std;

int main()
{

    int startTime = time(0);

    int count = 0;
    char letter;

    const int MAXCOUNT = 5;

    while (count != MAXCOUNT)
    {

        cout << "enter character \"a\" \n";
        cin >> letter;
        // cout << static_cast<int>(letter) << "\n";

        if (letter == 'a')
        {
            cout << "good\n";
            count++;
        }
        else
        {
            cout << "Thats not the character 'a', yo!\n.Your count is now\n";
            count--;
        }
        cout << count << "\n";
    }

    int endTime = time(0);
    int timeTot = endTime - startTime;
    cout << "Good you entered the charatcer 'a' five times in order to get out of the while loop\n"
         << "This drill was to let you know that in order to automatically get out of a while loop, you just have to meet the standards\n"
         << "of the expression in the statement while() and itll get out of the loop on to the next line of code.\n"
         << "Time total = " << timeTot<<" seconds.";

    return 0;
    // system("pause>0");
}