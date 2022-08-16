#include <iostream>
#include <cmath>
#include <ctime>
#include <iomanip>
#include <cstdlib>
#include <string>

int main()
{
  const int NUMBER_OF_CARDS = 52;
  int deck[NUMBER_OF_CARDS];

  std::string suits[] = {"Spades", "Hearts", "Diamonds", "Clubs"};
  std::string ranks[] = {"Ace", "2", "3", "4", "5", "6", "7", "8", "9", "10", "Jack", "King", "Queen"};

  // initialize cards
  for (int i = 0; i < NUMBER_OF_CARDS; i++)
  {
    deck[i] = i;
    std::cout << deck[i] << " "; // all numbers(card numbers) should print from 0 to 51 💥💥💥💥
  }
  std::cout << "\n";
  // std::cout << deck[1];
  /*
  💥💥💥💥💥💥💥💥💥💥💥💥
  KEY WORD = DENOTE(STATEMENT)
  💥💥💥💥💥💥💥💥💥💥💥💥
  super important.. i put std::cout << deck[1]; outside the forloop because the forLoop doesnt have a return value
  if I put on line 19, deck[1]=-777 and run line 22, IT WILL SHOW THAT INDEX 1 IS -777
  I sum it up to say this.. even though int deck[NUMBER_OF_CARDS] = 52, after the forloop, or during, its making i count from 0 to 51
  then assigning each indexes to deck[NUMBER_OF_CARDS] or deck[52]..
  like saying "out of deck[NUMBER_OF_CARDS], deck[0] = 0, deck[1] = 1,deck[2] = 2...deck[51 = 51"
  so its still remembering deck[NUMBER_OF_CARDS] or deck[52], its just assigning each index with a number
  REMEMBER THIS!! REMEMBER IT FAREAL. Sometimes things dealing with arrays dont need a return value.
  the reason thy its important to remember say deck[NUMBER_OF_CARDS] is because you can actually get more specific with it
  in a forloop like deck[i] or deck[0]=777, and can cout<<deck[0] outside the forloop because you just identified something specific
  with deck[NUMBER_OF_CARDS]  woooow   YOU JUST DENOTED IT..  💥💥💥💥SHAINA💥💥💥💥 SAID DENOTE IS TO MAKE A STATEMENT. YOU BASICALLY MADE A STATEMENT
  SO, WITH AN ARRAY, YOU CAN DENOTE IT INSIDE A FORLOOP
  */

  // shuffle the cards
  for (int i = 0; i < NUMBER_OF_CARDS; i++)
  {
    // generate an index randomly
    int index = rand() % NUMBER_OF_CARDS;
    int temp = deck[i];
    deck[i] = deck[index];
    deck[index] = temp;//you dont even need this one line.. its just by convention to keep everything usable by swapping from i and j (in this, j = deck[index])
                       //all we wanted was to somehow get the new deck[i] to randomize (we named this one deck[i] because they basically representing 
                       //the same task, (we wanted 52 numbers as deck i, now we want them randomized).
                       // so we assigned index as random NUMBER_OF_CARDS since it was denoted earlier by deck[i].
                       //then we wanted deck [i] to equal it but still wanted the original order index 0-51 
                       //💥💥💥💥💥💥💥💥💥💥💥💥💥💥💥💥💥💥💥💥💥💥💥💥💥💥💥💥💥💥💥💥💥💥💥💥💥💥💥💥💥💥💥💥
                       //💥💥💥💥💥💥💥💥💥💥💥💥💥💥💥💥💥💥💥💥💥💥💥💥💥💥💥💥💥💥💥💥💥💥💥💥💥💥💥💥💥💥💥💥
                       //soo what am i tryin to say??

                       //all you really needed in this line of code, really was deck[i] = rand() % NUMBER_OF_CARDS;
                       //and printed it to see if the numbers randomized. They do!!!
                       /*
                       you dont need
                        int index = rand() % NUMBER_OF_CARDS;
                        int temp = deck[i];
                        deck[i] = deck[index];
                        deck[index] = temp
                        ---->  this IIS to randomize but more so to keep the have a variable = an ordered 0-51 and the other variable to have 0-51 random
                        all you needed was 
                        deck[i] = rand() % NUMBER_OF_CARDS
                       */
    std::cout << deck[i] << " ";// all numbers(card numbers) should print randomly from 0 to 51 💥💥💥💥
  }
  std::cout << "\n";
  // display first 4 cards
  for (int i = 0; i < 4; i++)
  {

    std::string suit = suits[deck[i] / 13];//this still looks new to me but its the same as array[i] since suits is an array of strings and deck is an array of numbers,
                                           //suit simpplifies until it looks like te standard array[i]
                                           /*ex 
                                            suits[deck[i] / 13] can be 
                                            suits[deck[26] / 13] which is
                                            suits[deck[26] which is 
                                            suits[2] which is now in standard array[] form
                                            thats gonna just take some practice
                                           */
    std::string rank = ranks[deck[i] % 13];
    std::cout << "card Number " << deck[i] << ": is "
              << rank << " of " << suit << std::endl;
  }

  return 0;
}