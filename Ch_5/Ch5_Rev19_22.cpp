//The game of 21 using functions. Review 23 works:) Review 24 works:) Review 25 works:) and works:) done:)
#include <iostream>
using namespace std;
#include <stdlib.h>
#include <chrono>
#include "Utility.h"
void Introduction()
/*Gives the rules of 21*/
{
    cout << "Rules: Decide how many cards you want.\n";
    cout << "If you score 21, or closer to 21 than the computer does without going over, you win! \n";
    cout << "Here are your first two cards:  \n";
}
int DealCard(){
/*Returns a random card value
  Post: A value from 1 to 13 are returned*/
  int x = rand()%13 + 1;
if (x==11 || x==12 || x==13){
    x = 10;
}
const auto p1 = std::time(0);
        srand(p1);
  return(x);
}
int DealUser()
/*Asks the user how many cards they want and deals them, returning the sum
  Post: Cards have been displayed, and their sum returned*/
{
    int NumCards =2;
    int Card = DealCard();
    cout << "You: " << Card << " ";
    int SumCards = 0;
    SumCards+=Card;
    Card = DealCard();
    SumCards+=Card;
     cout << Card <<" Your Current Sum is : " << SumCards <<endl;
    int CardCount=2;
    for(int CardCount = 2; CardCount<=NumCards ; CardCount ++){
        cout << "Do you want another? ";
        char Another;
        cin >> Another;
        if((Another=='Y') ||(Another=='y')){
        cout << "Your next card is: " ;
        Card = DealCard();
        cout << Card << " ";
        SumCards+=Card;
        cout << "Your Currect sum is = " << SumCards << endl;
        NumCards++;
        const auto p1 = std::time(0);
        srand(p1);
        }
         
    }
    return(SumCards);
}
int DealComputer()
/*Deals Cards to the computer and returns the sum
  Post: three cards have been displayed, and their sum is returned*/
  {
      int SumCards =0;
      int NumCards = 1;
      cout << "The Computer's first card is: ";
      int Card = DealCard();
      cout << Card << endl; 
      int CardCount;
      SumCards = SumCards + Card;
      for (CardCount = 0; CardCount < NumCards; CardCount ++){
         if ((SumCards < 16) && (SumCards<21)){
            cout << "The computer is at " << SumCards << " So it takes another \n";
            NumCards=NumCards+1;
            Pause();
            Card = DealCard();
            SumCards = SumCards + Card;
            cout << " The computer got: " << Card << " ";
         }
         const auto p1 = std::time(0);
        srand(p1);
      }
      cout << " Computers sum = " << SumCards << endl;
      return(SumCards);
  }
int FindWinner(int UserSum, int ComputerSum)
/*Determines winner and returns code indicating winner.
  Post: Winner determined according to rules and specifications and code returned indicating 
  winner: 0=draw, 1 = user won, 2 = computer won*/
{
    const int Limit = 21;
    if((UserSum==ComputerSum) || ((UserSum>Limit)&& (ComputerSum>Limit))){
        return(0);
    }
    else if(((UserSum>ComputerSum) && (UserSum <=Limit)) ||(ComputerSum>Limit)){
        return(1);
    }
    else {
        return(2);
    }
}
void ReportResults(int Result)
/*Reports the result of the game
  Pre: Result is either 0,1,or 2
  Post: Result has been displayed*/
{
    if(Result ==0){
       cout << "A Draw!\n";
    }
    else if(Result ==1){
        cout << "You win! \n";
    }
    else 
        cout << "Computer wins!\n";
}
int PlayGame()
/* plays one game of 21 ad returns an indication of the winner
   Post:One game has been played and a code returned indicating the winner:
   0=draw 1 = user won 2 = computer won*/
{ 
    int UserSum=DealUser();
    int ComputerSum = DealComputer();
    int Winner = FindWinner(UserSum,ComputerSum);
    ReportResults(Winner);
    return(Winner);
}
void UpdateCount(int Result, int &Wins, int &Losses, int &Draws)
/*Increments one of the counters as determined by result
  Pre: Result is either 0,1, or 2
  Post: either wins, Losses, or Draws has been incremented based upon weather Result is 1,2, or 0 respectivly*/
{
    if(Result==0){
        Draws++;
    }
    else if(Result==1){
        Wins++;
    }
    else{
        Losses++;
    }
}
char AskRepeat()
/*Asks the user if another game is desired and returns response 
  Post: User has been asked and has responded with Y,y,N, or n.The response is returned*/
{
    char Answer;
    cout << "Would you like to play again (Y/N)? " ;
    cin >> Answer;
    while ((Answer!='Y') && (Answer !='y') && (Answer !='N') && (Answer!='n')){
        cout << "Answer Y or N please: ";
        cin >> Answer;
    }
    return(Answer);
}
void Report (int Wins, int Losses, int Draws)
/*Reports the currect results
    Pre: Wins, Losses, Draws represent the current results
    Post : The current results have been displayed*/
{

    cout << "Your wins = " << Wins << endl;
    cout << "Computer wins = " << Losses << endl;
    cout << "Draws =  " << Draws << endl;
}
int main()
// calls functions
{
    Introduction();
    int Wins=0, Losses = 0, Draws = 0;
    char Answer;
    do{
        int Result; // 0=draw, 1= userwin, 2=computer win
        Result = PlayGame();
        UpdateCount(Result,Wins,Losses,Draws);
        Answer = AskRepeat();
        const auto p1 = std::time(0);
        srand(p1);
    }while ((Answer !='N') && (Answer!='n'));
    Report(Wins, Losses, Draws);
    return(0);
    }