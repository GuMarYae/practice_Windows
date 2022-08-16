#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <fstream>

using namespace std;

//Note these are meant to be written in different main () like below but in completely different files. So, in order to use one, comment out the other

int main()
{
    // to write txt to a file
    ofstream output;
    // use the name.open() function with a parameter name

    output.open("numberssz.txt");
    // To write data, use the stream insertion operator >>
    output << 7 << " " << 7
           << " " << 100;
    output.close();

    cout << "Done. this is complete, Gu. ";



    return 0;
}

    //=========================================================


int main(){

    // to read txt from a file

    ifstream input;
    // use the name.open() function with the paramater name as the arguement
    input.open("numberssz.txt");

    int score1, score2, score3;

    // To read data, use the stream extraction operator >>
    input >> score1 >> score2 >> score3;
    cout << "Score TOT is " << score1 + score2 + score3 << "\n";
    // use the .close() function with no parameter
    input.close();

    cout << "Done, Gu";
    return 0;
}