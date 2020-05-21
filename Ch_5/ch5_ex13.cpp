//Chapter 5 example 13 works:) 
#include <iostream>
#include "Utility.h"
#include <stdlib.h>
#include <chrono>
#include <conio.h>
using namespace std;
void MakeRandomPegs( int &CorrectPeg1,int &CorrectPeg2, int &CorrectPeg3 ){
    const auto p1 = std::time(0);
    srand(p1);
do{
    CorrectPeg1 = rand()%5+1;
    CorrectPeg2= rand()%5+1;
    CorrectPeg3 = rand()%5+1;
  }while((CorrectPeg1 ==CorrectPeg2) ||(CorrectPeg2==CorrectPeg3)||(CorrectPeg1==CorrectPeg3));
 //cout << CorrectPeg1 << CorrectPeg2 << CorrectPeg3 << endl;
}
void DisplayGuessTurn(int &Turn){
cout << "Guess: " << Turn << endl;
}
void PlayGame(int &peg1, int &peg2, int &peg3)
//Plays the game
{
  //  for(int t; t<=winner;t++)
    cout << "\t First peg: ";
    cin >> peg1;
    cout << "\t Second peg: ";
    cin >> peg2;
        if(peg1==peg2){
            cout << "The pegs do not use the same colors, guess again" << endl;
            cout << "\t Second peg: ";
            cin >> peg2;
    }
    cout << "\t Third peg: ";
    cin >> peg3 ;
        if((peg3==peg2) || (peg3 == peg1)){
            cout << "The pegs do not use the smae colors, guess again" << endl;
            cout << "\t Thrid peg: ";
            cin >> peg3;
        }
}
int main()
{
    int CorrectPeg1, CorrectPeg2, CorrectPeg3;
    MakeRandomPegs(CorrectPeg1,CorrectPeg2,CorrectPeg3);
    int peg1,peg2,peg3,t;
  //do{
   // CorrectPeg1 = rand()%5+1;
    //CorrectPeg2= rand()%5+1;
    //CorrectPeg3 = rand()%5+1;
 // }while((CorrectPeg1 ==CorrectPeg2) ||(CorrectPeg2==CorrectPeg3)||(CorrectPeg1==CorrectPeg3));
  //cout << CorrectPeg1 << CorrectPeg2 << CorrectPeg3 << endl;
  t =1;
  int GuessesTotal=0;
  do{
      DisplayGuessTurn(t);
      t++;
      PlayGame(peg1,peg2,peg3);
     // GiveHints(peg1,peg2,peg3,CorrectPeg1,CorrectPeg2,CorrectPeg3);
      if ((peg1 == CorrectPeg1) && (peg2!=CorrectPeg2) && (peg3!=CorrectPeg3)){
         cout << "You have 1 correct peg " ;
          if((peg2==CorrectPeg3) && (peg3==CorrectPeg2)){
              cout << " and 3 correct colors" << endl;
          }
          else if((peg2==CorrectPeg3)||(peg3==CorrectPeg2)){
              cout << " and 2 correct colors" << endl;
          }
          else {
              cout << "and 1 correct color" << endl;
          }
      }
      else if ((peg1 == CorrectPeg1) && (peg2==CorrectPeg2) && (peg3!=CorrectPeg3)){
         cout << "You have 2 correct peg and two correct colors" << endl;
      }
      else if ((peg1 == CorrectPeg1) && (peg2!=CorrectPeg2) && (peg3==CorrectPeg3)){
         cout << "You have 2 correct peg and two correct colors" << endl;
      }
      else if ((peg1 != CorrectPeg1) && (peg2==CorrectPeg2) && (peg3!=CorrectPeg3)){
         cout << "You have 1 correct peg " ;
          if((peg1==CorrectPeg3) && (peg3==CorrectPeg1)){
              cout << " and 3 correct colors" << endl;
          }
          else if((peg1==CorrectPeg3)||(peg3==CorrectPeg1)){
              cout << " and 2 correct colors" << endl;
          }
          else {
              cout << "and 1 correct color" << endl;
          }
      }
      else if ((peg1 != CorrectPeg1) && (peg2!=CorrectPeg2) && (peg3==CorrectPeg3)){
         cout << "You have 1 correct peg " ;
          if((peg2==CorrectPeg1) && (peg1==CorrectPeg2)){
              cout << " and 3 correct colors" << endl;
          }
          else if((peg1==CorrectPeg2)||(peg2==CorrectPeg1)){
              cout << " and 2 correct colors" << endl;
          }
          else {
              cout << "and 1 correct color" << endl;
          }
      }
      else if ((peg1 != CorrectPeg1) && (peg2==CorrectPeg2) && (peg3==CorrectPeg3)){
         cout << "You have 2 correct peg and 2 correct colors" << endl;
      }
     // else if((peg1 == CorrectPeg1) && (peg2==CorrectPeg2) && (peg3!=CorrectPeg3)){
         // cout << " You have 2 correct pegs and 2 correct colors" << endl;
     // }
      else if((peg1!=CorrectPeg1)&&(peg2!=CorrectPeg2)&&(peg3!=CorrectPeg3)){
              cout << "You have 0 correct pegs ";
              if(((peg1==CorrectPeg2) || (peg1==CorrectPeg3))&&((peg2==CorrectPeg1)||(peg2==CorrectPeg3))&&((peg3==CorrectPeg2) ||(peg3==CorrectPeg1))){
              cout << " and 3 correct colors" << endl;
             }
             else if (((peg1==CorrectPeg2) || (peg1==CorrectPeg3))&&((peg2==CorrectPeg1)||(peg2==CorrectPeg3))
             ||((peg3==CorrectPeg2) ||(peg3==CorrectPeg1))&& ((peg1==CorrectPeg2) || (peg1==CorrectPeg3))
             || ((peg2==CorrectPeg1)||(peg2==CorrectPeg3))&& ((peg3==CorrectPeg2) ||(peg3==CorrectPeg1))){
              cout << " and 2 correct colors" << endl;
             }
             else if (((peg1==CorrectPeg2) || (peg1==CorrectPeg3))||((peg2==CorrectPeg1)||(peg2==CorrectPeg3))||((peg3==CorrectPeg2) ||(peg3==CorrectPeg1))){
              cout << " and 1 correct colors" << endl;
             }
             else {
                 cout << " and 0 correct colors " << endl;
             }
      }
      GuessesTotal ++;
  } while((peg1!=CorrectPeg1) || (peg2!=CorrectPeg2) || (peg3!=CorrectPeg3));
  if((peg1==CorrectPeg1) && (peg2==CorrectPeg2) && (peg3==CorrectPeg3)){
      cout << "You have 3 correct pegs and 3 correct colors" << endl;
      cout << "You Win! you have broken the code in " << GuessesTotal  << " guesses.";
  }
      
  
return(0);

}
