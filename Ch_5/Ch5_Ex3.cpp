//Chapter 5 Example 3 not working
#include <iostream>
using namespace std;
void Spaces(int Spaces)
/*Displaces spaces before triangle
  Post: Displays spaces*/
{
    for(int i=Spaces; i<0;i-- ){
        cout.setf(ios::left);
        cout<<" ";
    }
}
void DrawBar(int Length, char Mark)
//Displays a bar of lenght Length and character Mark
{
    for(int i=1;i<Length;i++){
        cout << Mark;
    }
    cout << endl;
}
void IsoTriangle(int Rows)
// Determines how many lines for the triangle
{
    // Spaces(Rows-1);
    // DrawBar(1,'*');
     for(int k=0; k<=Rows-1;k++){
        //  cout << k << endl;
        cout.setf(ios::left);
        Spaces(k);
        //int number = Rows -(Rows-1);
        DrawBar ((k+3), '*');
     } 
}
int main()
// Calls Iso Functions
{
    IsoTriangle(4);
return(0);
}