//chapter 5 example 12 works:) Nim
#include <iostream>
#include <stdlib.h>
#include <chrono>
#include <conio.h>
using namespace std;
int RandomInRange(int Low, int High)
/*Takes a number in a low and high range and produces a random number
  post: Random number between high and low is produced*/
{ 
    const auto p1 = std::time(0);
    srand(p1);
    int RandomNumber;
    for(int i=Low;i<=High;i++){
    RandomNumber = rand()%High + Low;
    if(RandomNumber>High){
      RandomNumber=RandomNumber - Low;
        }
    }
     return(RandomNumber);
}
int UserTurn(int &NumberStones)
//The user take a turn
{
    int UserTakes;
    cout << "There are " << NumberStones << " Stones. How many would you like? ";
    cin >> UserTakes;
    NumberStones= NumberStones - UserTakes;
    cout << "There are now " << NumberStones << " Stones.";
    return(NumberStones);
}
  int ComputerTurn(int &NumberStones)
  {
    int ComputerTakes;
    if(NumberStones==3){
      ComputerTakes=2;
    }
    else if(NumberStones==2){
      ComputerTakes=1;
    }
    else {
      ComputerTakes=rand()%3+1;
    }
    cout << "The computer is going to take " << ComputerTakes;
    NumberStones = NumberStones- ComputerTakes;
    cout << " There are now " << NumberStones;
    return(NumberStones);
  }
int main(){
    int NumberOfStones = RandomInRange(15,30);
    int TakeStonesUser,TakeStoensComputer;
    while(NumberOfStones>0){
    UserTurn(NumberOfStones);
    if(NumberOfStones<1){
      cout << "The Computer Wins";
      break;
    }
    ComputerTurn(NumberOfStones);
    if(NumberOfStones<1){
      cout << "You win!";
    }
    }
    return(0);

}
