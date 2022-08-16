#include <iostream>
#include <cstdlib>
using namespace std;

/*
isdigit(ch) Returns true if the specified character is a digit.
isalpha(ch) Returns true if the specified character is a letter.
isalnum(ch) Returns true if the specified character is a letter or digit.
islower(ch) Returns true if the specified character is a lowercase letter.
isupper(ch) Returns true if the specified character is an uppercase letter.
isspace(ch) Returns true if the specified character is a whitespace character.
tolower(ch) Returns the lowercase of the specified character.
toupper(ch) Returns the uppercase of the specified character.
*/

int main()
{
    srand(time(0));
    char letter = 'a';
    int conversion = static_cast<int>(letter);
    cout << conversion << endl;

    if (islower(letter))
    {
        cout << "the letter is a lowercase letter " << endl;
    }
    else
    {
        cout << " this is an uppercase letter \n";
    }
    return 0;
}
