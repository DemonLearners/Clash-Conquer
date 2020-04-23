#include "Hangman.h"

bool Hangman::checkGuess(string word, char guess, bool matched[],int &right)
{

    bool found = false;

    for (int i = 0; i < word.length(); i++)

    {

        if (word[i] == tolower(guess))

        {
            if (matched[i])
            {
                cout << "You alrady guess that guess again" << endl;
                return true;
            }  
            else
            {
                right++;
                matched[i] = true;
                found = true;
            }
        }

    }

    return found;

}

void Hangman::displayGameState(string word, bool matched[], int guesses)
{
    cout << "Hangman" << endl << endl;

    cout << "\tIncorrect Guesses Remaining : " << (GUESS_LIMIT - guesses) << endl << endl;

    cout << "\tWord: ";

    for (int i = 0; i < word.length(); i++)

    {

        if (matched[i])

            cout << word[i] << " ";

        else

            cout << "_ ";

    }

    cout << endl << endl;

}

bool Hangman::PlayGame() {

   int guesses = 0;

   string word = "disambiguation";
   const int wordSize =14;
    bool matched[wordSize]{ false };
    char guess;
    int right = 0;
    //initialize matched array

    for (int i = 0; i < word.length(); i++)
        {
        matched[i] = false;
        }
    //Game loop

    int gameStatus = 0;
    
    
    do
    {

        displayGameState(word, matched, guesses);

        cout << "Choose a letter : ";

        cin >> guess;

        cin.clear();

        cout << endl << endl;

        if (!checkGuess(word, guess, matched,right))
            guesses++;
        if (GUESS_LIMIT == guesses)
            gameStatus = 2;
        else if(right == wordSize)
            gameStatus = 1;

    } while (gameStatus < 1);
        if (gameStatus == 2)
        {
            cout << "You lose." << endl;
            return false;
        }
        else
        {
            cout << "You won." << endl;
            return true;
        }

}

