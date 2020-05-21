//chapter 6 Review 6,7,8,9 steve check?
#include <iostream>
#include <stdlib.h>
using namespace std;
void FillPeg(PegClass peg, int N)
//Add N rings to the peg from size N to 1. 
{
for (int i= N; i>=1; i--){
    peg.AddRing(i);
}
}
// It could be used instead of having left, middle and right pegs,
// we could just choose a peg to add rings to
void GetUserMove(char &pegSource, char &pegDestination )
//asks user for a source peg and a destination peg l,n,R
//returns the input as two reference parameters
{
    cout << "Which peg would you like to take from? ";
    cin >> pegSource;

}