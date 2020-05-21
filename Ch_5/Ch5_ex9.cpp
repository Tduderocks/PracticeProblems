// Chapter 5 Example 9. a and b work:) done
#include <iostream>
using namespace std;
void ReadTime(int &Min, int &Sec)
/*reads time
  Post: time is received from user*/
{
    cout << "\tEnter minutes: ";
    cin >> Min;
    cout << "\tEnter Minutes: ";
    cin >> Sec;
}
void DisplayTime(int Minutes, int Seconds)
// Displays time
{
  int Hour = Minutes/60;
  Minutes = Minutes - (Hour*60);
  Seconds = Seconds;
  cout << Hour<< ":";
  if (Minutes<10){
    cout << "0" << Minutes << ":";
  }
  else{
  cout << Minutes << ":" ;
  }
  if(Seconds<10){
    cout << "0" << Seconds << endl;
  }
  else{
  cout << Seconds << endl;
  }
}
void AddTime (int Min1, int Sec1, int Min2, int Sec2, int &sumMin, int &sumSec)
// Adds two times together and returns them as parameters
{
  sumSec = (Sec1+Sec2)%60;
  //int extraMinutes = sumSec%60;
  sumMin = Min1+Min2 +((Sec1+Sec2)/60);
  
}
int main()
//calls functions
{
  int Minutes, Seconds, Minutes2, Seconds2, TotalMin, TotalSec;
  cout << "Enter a time: " << endl;
  ReadTime(Minutes,Seconds);
  cout << "Your time was: ";
  DisplayTime(Minutes,Seconds);
  cout << "Enter a second time: " << endl;
  ReadTime(Minutes2,Seconds2);
  cout << "Your time was: ";
  DisplayTime(Minutes2,Seconds2);
  cout << "Your total time was: ";
  AddTime(Minutes,Seconds,Minutes2,Seconds2,TotalMin,TotalSec);
  DisplayTime(TotalMin,TotalSec);
  return(0);
}