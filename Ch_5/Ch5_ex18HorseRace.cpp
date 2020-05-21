//chapter 5 excersise 18 Horse race very cool works:)
#include <iostream>
#include <stdlib.h>
#include <chrono>
#include <conio.h>
using namespace std;
void drawline(int Position)
//draw the line of the horse
{
    cout <<"|";
    for(int i=1;i<Position;i++){
        cout << "-";
    }
    cout << "H";
    for (int j=Position;j<=14;j++){
        cout <<"-";
    }
    cout << "|";
}
void ShowHorse(int HorseNumber, int &Position)
//Takes a horse number and position on track and shows current position
{
    
    cout << HorseNumber;
    drawline(Position);
    cout << endl;
}
void HorseMovement(int HorseNumber, int &Position)
//determines if horse will move
{
    int x;
    x = rand()%100+1;
    if(x>=50){
        Position = Position +1;
    }
}
int main()
//calls functions
{
    const auto p1 = std::time(0);
    srand(p1);
    int position1=1;
    int position2=1;
    int position3=1;
    int Horse1 =1;
    int Horse2 =2;
    int Horse3 = 3;
    do{
    HorseMovement(Horse1,position1);
    HorseMovement(Horse2,position2);
    HorseMovement(Horse3,position3);
    ShowHorse(Horse1,position1);
    ShowHorse(Horse2,position2);
    ShowHorse(Horse3,position3);
    cout <<endl;
    }while((position1<15)&&(position2<15)&&(position3<15));
    return(0);
}