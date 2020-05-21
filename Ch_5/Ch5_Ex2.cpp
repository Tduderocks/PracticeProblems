// Chapter 5 example 2. a: works :) _ b : works:) done :)
#include <iostream>
using namespace std;
void DrawBar(int Length, char Mark)
//Displays a bar of lenght Length and character Mark
{
    for(int i=0;i<Length;i++){
        cout << Mark;
    }
    cout << endl;
    
}
void Triangle(int Rows)
/*Determines how many rows to draw the line making a triangle
  Post: A right triangle is created*/
  {
     for(int j =1; j<=Rows; j++){
     DrawBar (j, '*');
     }
  }
int main()
// Calls triangle
{
    Triangle(1);
    cout << endl;
    Triangle(3);
    cout << endl;
    Triangle(5);
    cout <<endl;
    Triangle(7);
    cout << endl;
}
