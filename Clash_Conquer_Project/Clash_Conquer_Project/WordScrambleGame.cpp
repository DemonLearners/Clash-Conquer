#include <iostream>
#include <algorithm>
#include "WordScrambleGame.h"

using namespace std;


void WordScrambleGame::Initialize(){
    cout<<"Welcome to the Word Scramble game, you must score 3 points to win, lest you be left with a terrible fate!"<<endl;
    point = 0;
}

bool WordScrambleGame::Play(){
    Initialize();
    for(int i=0; i<guessCount; i++){
        cout<<nword[i]<<endl;
        cin>>input;
        transform(input.begin(), input.end(), input.begin(), ::toupper);
        if(input==word[i])
        {
            cout<<"Correct"<<endl;
            cout<<"You have:"<<endl;
            cout<<""<<i+1<<" "<<"Points"<<endl;
            point += i+1;
        }
        else
        {
            cout<<"WRONG, A TERRIBLE FATE IS UPON YOU, however you still have "<<guessCount-i-1<<" chances"<<endl;
        }

    }
    cout<<"Your Score is:"<<point<<endl;
    if (point < 3) {
        cout << "Congrats, you won";
        return true;
    }
   
    else
    {
        cout << "You lost";
        return false;
    }

}
