#include <iostream>
using namespace std;

int main()
{
    int loop = 0;
    int i;

    for (i = 0; i < 100; i += 10)
    {

        cout << i << endl;
    }

    cout << "the max of " << i << " was reached";
    return 0;
}

//note . you cant do i+10, or i + anything for that matter (except for i++) 
//the only way to make it count by certain numbers id the way in the example.