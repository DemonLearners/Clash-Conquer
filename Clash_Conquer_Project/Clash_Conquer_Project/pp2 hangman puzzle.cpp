#include <iostream>

#include <cctype> // used for converting character to lowercase

using namespace std;

const int GUESS_LIMIT = 6;

bool checkGuess(string word, char guess, bool matched[])

{

               bool found = false;

               for(int i=0;i<word.length();i++)

               {

                              if(word[i] == tolower(guess))

                              {

                                             matched[i] = true;

                                             found = true;

                              }

               }

               return found;

}

void displayGameState(string word, bool matched[], int guesses)

{

               cout<<"Hangman"<<endl<<endl;

               cout<<"\tIncorrect Guesses Remaining : "<<(GUESS_LIMIT-guesses)<<endl<<endl;

               cout<<"\tWord: ";

               for(int i=0;i<word.length();i++)

               {

                              if(matched[i])

                                             cout<<word[i]<<" ";

                              else

                                             cout<<"_ ";

               }

               cout<<endl<<endl;

}

int main() {

               int guesses = 0;

               string word = "disambiguation";

               bool matched[word.length()];

               char guess;

               //initialize matched array

               for(int i=0;i<word.length();i++)

                              matched[i] = false;

               //Game loop

               do

               {

                              displayGameState(word,matched,guesses);

                              cout<<"Choose a letter : ";

                              cin>>guess;

                              cin.clear();

                              cout<<endl<<endl;

                              if(!checkGuess(word,guess,matched))

                                             guesses++;

               }while(guesses < GUESS_LIMIT);

               cout<<"You lose."<<endl;

               return 0;

}

//end of program
