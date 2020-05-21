//Chapter 6 Review 5. Steve can you check? Is it cheating? 
#include <iostream>
using namespace std;
int TotalRings(PegClass peg1, PegClass peg2, PegClass peg3)
//Takes 3 pegs and returns their total sum
{
    int total = peg1.RingsOnPeg() + peg2.RingsOnPeg() + peg3.RingsOnPeg();
    return total;
}
int main()
// calls function
{
PegClass P(8), Q(8), S(8);

P.AddRing(3); Q.AddRing(4); S.AddRing(2);
P.AddRing(4);Q.AddRing(6); S.AddRing(1);

cout << "The total of rings on the pegs is" << TotalRings(P,Q,S);

return(0);
}