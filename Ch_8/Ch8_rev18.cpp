//chapter 8 review 18 & 19 works:)
#include <iostream>
#include <stdlib.h>
using namespace std;
struct PegBoard{
    //struct pegboard
     // constructor
    int NumberOfPegs;
    int SizeOfPegs;
    PegBoard()
    {
        // constructor initializing 3 and 7
        NumberOfPegs = 3;
        SizeOfPegs=7;
    }
};

int TotalRings(PegBoard Pegboard)
//takes a pegboard agrument from above and retruns the total number of rings on the three pegs
{
// cout << NumberOfPegs << " " << SizeOfPegs << ".\n";

return(Pegboard.NumberOfPegs);
}
int main()
//test the function
{
    PegBoard board;
    int num=TotalRings(board);
    cout << num;
    return(0);
}


