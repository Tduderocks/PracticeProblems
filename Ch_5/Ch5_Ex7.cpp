// Chapter 5 Example 7 works:) done :)
#include <iostream>
using namespace std;
char GetChar(char Lo, char Hi)
//Gets a character from the user
{
    char letter;
    cout << "Enter the letter";
    cin >> letter;
   // 'A' > 'B'>'C'>'D'>'E'>'F'>'G'>'H'>'I'>'J'>'K'>'L'>'M'>'N'>'O'>'P'>'Q'>'R'>'S'>'T'>'U'>'V'>'W'>'X'>'Y'>'Z';
    while ((letter > Hi) || (letter < Lo)){
        cout << "That letter is not in range, please enter another ";
        cin >> letter;
    }
    cout << "Thank you!";
    return(letter);
}
int main(){
    GetChar('B','M');
    return(0);
}