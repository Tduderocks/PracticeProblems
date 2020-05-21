//Review 26: User tells what maxnumber will be works:)
//Review 27: User has option of playing the game repeatidly. Not printing it took you & need to track lowest and highest.
#include<iostream> 
using namespace std;
#include <stdlib.h>
#include <chrono>
int main()
{
    cout << "--Guessing Game!--\n";
    cout << "What would you like the maximum possible number to be? ";
    int MaxValue;
    cin >> MaxValue;
    char Answer;
    // Have useer guess secret number
    const int GiveUpValue = 0;
    int NumGuesses = 0;
    int Guess;
    int Secret;
   
    do{
        //Generate Secret Number
    int Secret = 1+rand()%MaxValue;
         const auto p1 = std::time(0);
    srand(p1);
   
     do{
        cout << "Enter guess(" << GiveUpValue << "to give up):";
        cin >> Guess;
        int LowestPossible = 0;
        int HighestPossible = 0;
        if (Guess!=GiveUpValue){
            if(Guess == Secret){
                cout << "You've got it!\n";
                cout << "It took you " << NumGuesses << " Guesses " << endl;
            }
            else if (Guess > MaxValue){
                cout << "Out of range, try again\n";
            }
            else if(Guess < 0){
                cout << "Out of range, try again\n";
            }
            else if(Guess < Secret){
                cout << "Too low, try again!\n";
                LowestPossible = Guess +1;
                if(Guess < LowestPossible){
                    cout << " That is lower than the Lowest Possible Number, try again \n";
                    NumGuesses = NumGuesses - 2;
                }
            }
            else if (Guess > Secret){
                cout << "Too high! try again!\n";
                HighestPossible = Guess - 1;
                if (Guess > HighestPossible){
                    cout << "That is higher than the highest Possible number, try again\n";
                    NumGuesses = NumGuesses -1;
                }
            }
            NumGuesses ++;
        }
     }while ((Guess != GiveUpValue) && (Guess != Secret));
        cout<< "Do you want to play again? Enter Y for yes or N for no\n";
        cin >> Answer;
        if (Guess == GiveUpValue){
        cout << "You gave up after " << NumGuesses << "Guesses\n";
        }
    }while (Answer == 'Y'|| Answer == 'y');
    return(0);
}