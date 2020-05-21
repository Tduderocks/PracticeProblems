//chapter 5 example 15 //works:) 
#include <iostream>
#include "Utility.h"
using namespace std;
void UserRisk(int &Risk)
//Asks the user what to risk
{
    cout << "Points to risk: ";
    cin >> Risk;

}
void RollDice(int &Dice1, int &Dice2)
//Rolls two dice
{
    const auto p1 = std::time(0);
    srand(p1);
    Dice1=rand()%6 +1;
    cout << "Roll is: " << Dice1;
    Dice2=rand()%6 + 1;
    cout << " and " << Dice2 << endl;
}
int DetermineWinner(int Dice1, int Dice2)
//Determines the winner
{
    int total = Dice1+Dice2;
    if (total%2==0){
        cout << "You loose" << endl;
        return(1);
    }
    else{
        cout << "You win" << endl;
        return(0);
    }
}
int  PlayAgain(int &Answer)
//Asks the user to play again
{
    cout << "Would you like to play again? (1 for Yes, 0 for No)";
    cin >> Answer;
    if (Answer==0){
        return(0);
    }
    else{
        return(1);
    }
}
int main()
//Calls functions
{
    int Answer;
    int UserScore=1000;
    do{
    int risk,dice1,dice2;
    int answer;
    cout << "You have " << UserScore << " points" << endl;
    UserRisk(risk);
    RollDice(dice1,dice2);
    int winner = DetermineWinner(dice1,dice2);
    if (winner==0){
        UserScore = UserScore +(2*risk);
        cout << "Current score is: " << UserScore << endl;
    }
    else {
        UserScore = UserScore-risk;
        cout << "Current Score is: " << UserScore <<endl;
    }
    Answer = PlayAgain(answer);
    }while(Answer!=0);
    return(0);
}