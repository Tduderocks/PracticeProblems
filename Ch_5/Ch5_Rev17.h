/* Ch5 Rev 17
Utility Library
Void() Pause()
int GetInt(int Lo, Int Hi)*/
#include <iostream>
#include <conio.h>
using namespace std;

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

int main(){
    Pause();
    return 0;
}
