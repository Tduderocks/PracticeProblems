// Chapter 5 Example 1 works :) done :)
#include <iostream>
using namespace std;
void Roof()
//Makes the roof
{
cout << "      /\\\n" ;
cout << "     /  \\\n";
cout << "    /    \\\n";
}
void Base()
//Makes the Base
{
cout <<"    ______\n";
cout <<"   |      |\n";
cout <<"   |______|\n";
}
void Walk()
//Makes the bottom
{
cout <<"      **   \n";
cout <<"      **********\n";
}
int main()
//calls the function Roof, Base, Walk
{
    Roof();
    Base();
    Walk();
    return(0);
}