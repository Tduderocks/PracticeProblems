// Ch 4 Review # 23 NOt Working
#include <iostream>
using namespace std;
#include <math.h>
#include <conio.h>
#include <random>
#include <chrono>
#include <cstdlib>              // Header Files              
#include<windows.h>

int main()
{
const auto p1 = std::time(0);
    srand(p1);
cout<<"Doodler! Press I/J/K/M to move, Q to quit" << endl;
char KeyPressed;
do{
    BOOL WINAPI SetConsoleCursorPosition(
  _In_ HANDLE hConsoleOutput,
  _In_ COORD  dwCursorPosition
);
    SetConsoleCursorPosition(40,10);
    cout<< '*';
    SetConsoleCursorPosition(x,y);
    KeyPressed = getch();
    if(KeyPressed=='I' || KeyPressed == 'i')
    y--;
    else if (KeyPressed =='M' ||KeyPressed =='m')
    y++;
    else if (KeyPressed =='J' || KeyPressed == 'j')
    x--;
    else if (KeyPressed =='K' || KeyPressed == 'k')
    x++;
    else if (KeyPressed =='Q' || KeyPressed == 'q')
    ;
    else 
    cout << "\a";
} while((KeyPressed != 'Q') && (KeyPressed != 'q'));
    gotoxy(1,1);
    clreol();
    cout << "Random Starts! Press any key to stop."<< endl;
    while (!kbhit()){
        gotoxy(1+rand()%60, 2+rand()%20);
        cout << "*";
    }
    return(0);
}
