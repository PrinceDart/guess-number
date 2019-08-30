#include <iostream>

using namespace std;

int main()
{
    cout <<"guess number is in between 1 to 10."<<endl;

    int secretNumber = 7;
    int guess ;
    int guessCount = 0;
    int guessLimit = 4;
    bool OutofGuess = false;

    while(secretNumber != guess  && !OutofGuess){
        if(guessCount < guessLimit){
        cout <<"enter the guess number:";
        cin >> guess;
        guessCount ++;
        }
        else{
            OutofGuess = true;
        }

    }

    if(OutofGuess){
        cout<<"you lose!";
    } else{
        cout<<"you win!"<<endl;
    }


    return 0;
}
