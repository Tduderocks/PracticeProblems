//chaper5 example 15 still working on it
#include <iostream>
using namespace std;
void RiskPoints(int &points)
//Ask the user how many points to risk
{
    cout << "How many points to risk: ";
    cin >> points;
}
int HighLow()
//play the game
{
    int HighLow;
    cout << "Predict (1=High, 0=Low)";
    cin >> HighLow;
    if (HighLow == 0){
        cout << "You chose low" << endl;
        return(0);
    }
    else {
        cout << "You chose high" << endl;
        return(1);
    }
    
}
void RandomChoice(int &number)
// draws a random number
{
    number=rand()%13+1;
    cout << "Number is " << number << endl;
}
int DetermineHighLow(int number)
//Determines high or low
{
    if ((number>=1) && (number<=6)){
        cout << "The number is low" << endl;
        return(0);
    }
    else
    {
        cout << "The number is high" << endl;
        return(1);
    }
}
int DetermineWinner(int HighLowchoice, int HighOrLow)
// Determines the winner
{
    if(HighOrLow== HighLowchoice){
        cout << "You win" << endl;
        return(0);
    }
    else {
        cout << "You loose" << endl;
        return(1);
    }
}
void PlayAgain(int &answer)
//Asks if they want to play again
{
    cout <<"Do you want to play again? (0 for yes, 1 for no)";
    cin >> answer;
}
int main()
//Calls the functions
{
   int UserScore=1000;
   int points,HighOrLow,numberRolled,answer,WhatItWas;
   do{
   cout << "You have " << UserScore << " points." << endl;
   RiskPoints(points);
   HighOrLow = HighLow();
   RandomChoice(numberRolled);
   int y = DetermineHighLow(numberRolled);
   int x = DetermineWinner(HighOrLow,y);
   if (x==0){
       UserScore = UserScore + points;
   }
   else{
       UserScore = UserScore - points;
   }
   cout << "Your current score is " << UserScore << endl;
   PlayAgain(answer);
   }while(answer!=1);
   return(0);
}