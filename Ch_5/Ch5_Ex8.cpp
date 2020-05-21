// Chapter5 Example 8 part a works:) partb works:) c?
#include <iostream>
#include <stdlib.h>
#include <chrono>
using namespace std;
void BreakUp(int Integer, int &FirstDigit, int&SecondDigit, int &ThirdDigit)
/*Takes an integer and returns each of the digits seperatily
  Pre: Takes a number 0 to 999
  Post : Digits are displayed individually*/
{
    cout << Integer;
    FirstDigit = Integer/100;
    SecondDigit = (Integer%100)/10;
    ThirdDigit = Integer%10;
    cout << " : The First Digit is: " << FirstDigit;
    cout << " The Second Digit is: " << SecondDigit;
    cout << " The Third Digit is: " << ThirdDigit;
}
void Build (int digit1, int digit2, int digit3, int &number)
/*Takes three seperate digits and returns the number
  Post: a three digit number is displayed*/
{
    
    cout << digit1 << digit2 << digit3;
}
int main()
//Calls BreakUp
{
  for(int i=100;i<=110;i++){
    int a,b,c, n;
    BreakUp(i,a,b,c);
    cout << "  ";
    Build(a,b,c,n);
    cout << endl;
  }
    return(0);
}
