#include "Hangman.h"
#include <array>
bool Hangman::checkGuess(string word, char guess, bool matched[])
{

    bool found = false;

    for (int i = 0; i < word.length(); i++)

    {

        if (word[i] == tolower(guess))

        {

            matched[i] = true;

            found = true;

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
    
    //initialize matched array

    for (int i = 0; i < word.length(); i++)
        {
        matched[i] = false;
        }
    //Game loop

    int gameStatus = 0
    
    
    do

    {

        displayGameState(word, matched, guesses);

        cout << "Choose a letter : ";

        cin >> guess;

        cin.clear();

        cout << endl << endl;

        if (!checkGuess(word, guess, matched))

            guesses++;
        if (GUESS_LIMIT == guess)
        gameStatus = 2
        bool flag = false;
        for (int i = 0; i < matched.size(); i++)
        {
            if (matched[i]==false)
            {
                flag == true;
                break;
            }
        }
        if (!flag)
        gameStatus = 1;

    } while (gameStatus < 1);
        if (gameStatus == 2)
        cout << "You lose." << endl;
        else
        cout << "You won." << endl;
    return 0;

}

