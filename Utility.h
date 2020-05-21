/* Ch5 Rev 17
Utility Library : Pause, Get Integer, Signatrue, Random In Range, DisplayFormated(For Decimals)
Void() Pause()
int GetInt(int Lo, Int Hi)*/
#include <iostream>
using namespace std;
#include <stdlib.h>
#include <chrono>
#include <conio.h>

//----------------------------------
void Pause()
/*Display a message and waits for the user to hit a key
  Post: Key Pressed */
{
      cout << "Press a key to continue"<< endl;
      getch(); // Pause for user to hit a key
}
  // ---------------------------------
int GetInt(int Lo, int Hi)
  /* Obtains and returns an integer from the user in the range Lo..Hi.
     Pre: Lo < Hi
     Post : An integer between Lo and Hi inclusive returned */
{
    int Entry;
    cin >> Entry;
    while ((Entry < Lo) || (Entry > Hi)){
        cout << " Value must be between" << Lo << " and" << Hi << endl;
        cout << "Please re-enter: ";
        cin >> Entry;
    }
    return(Entry);
}
void Signature()
//Displays my name
{
    cout << "This was written by Theresa Lorello";
}
int RandomInRange(int Low, int High)
/*Takes a number in a low and high range and produces a random number
  post: Random number between high and low is produced*/
{ 
    //int RandomNumber;
    const auto p1 = std::time(0);
    srand(p1);
    return rand()%(High-Low+1)+Low;
    // int randomness=(High - Low)+1;
    // for(int i=Low;i<=High;i++){
    // RandomNumber = rand()%High + Low;
    // if(RandomNumber>High){
    //   RandomNumber=RandomNumber - Low;
    // }
}

int RandomInRange(int Low, int High, bool seed){
  if(seed){
    const auto p1 = std::time(0);
    srand(p1);
  }
  return rand()%(High-Low+1)+Low;
}
    
//     return(RandomNumber);
// }
void DisplayFormatted(int n, int width)
/*Displays the value of n left-aligned in a field of size width.
  Post: Value displayed left-aligned in a field of size Width*/
{
    cout.setf(ios::left);
    cout.width(width);
    cout << n << endl;
}
void DisplayFormatted(double x, int widthOfDouble, int decimalPoints)
//
{
    cout.setf(ios::fixed);
    cout.precision(decimalPoints);
    cout.setf(ios::left);
    cout.width(widthOfDouble);
    cout << x << endl;
}

