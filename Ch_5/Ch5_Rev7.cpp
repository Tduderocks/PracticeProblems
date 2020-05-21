//Chapter 5 Review 7 // works this is trippy :) Review 8 ?
#include <iostream>
using namespace std;

void DrawBox(int length,char mark='*')
// Draws a box with length and character
{
    for(int i=0;i<length;i++){
    cout << mark << "" ;
}
}
void DrawBox(int height, int length, char Mark)
// Draws a rectangle of size Height and Width using the character Mark
// Heigth, Width assumed >=0
{
for(int j=0;j<=height; j++){
    DrawBox(4,Mark);
    cout << "" << endl;
}
}
int main()
// calls the function
{
    DrawBox(4);
    cout << "" << endl;
    DrawBox(2,3,'&');
    return(0);
}
