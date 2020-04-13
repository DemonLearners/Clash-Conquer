#include<iostream>
#include<string>
#include<cctype> //used for converting characters to lowercase
using namespace std;

int main()
{
    const int a=3;
    string word[a]={"MICROSCOPE","TEMPERATURE","ELEPHANT"};
    string nword[a]={"PERCSOICMO","EMEERTRUAPT","ATEPLHEN"};
    string j;
    int point;
    int p=0;
    int ctr=0;
 
    cout<<"Welcome to the Word Scramble game, you must score 3 points to win, lest you be left with a terrible fate!"<<endl;
    for(int i=0; i<a; i++)
    {
        cout<<nword[i]<<endl;
        cin>>j;
         
          
     
        ctr++;
        if(j==word[i])
        {
            cout<<"Correct"<<endl;
            cout<<"Your have:"<<endl;
            cout<<""<<i+1<<" "<<"Points"<<endl;
              
        }
        else
        {
            cout<<"WRONG, A TERRIBLE FATE IS UPON YOU"<<endl;
        }
         
    }
    //cout<<"Your Score Is:"<<point<<endl;
    return 0;
}

