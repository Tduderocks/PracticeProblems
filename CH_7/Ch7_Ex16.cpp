//Chapte 7 Example 16 works yay done:)
#include <iostream>
#include <math.h>
using namespace std;
int SumUp(int N)
//returns the sum of all positive integers less than or equal to its argument
// forumla is N + sum 1-(n-1)
{
    int sum;
   if (N==1){
       return(1);
   }
   else
   {
    return(N + SumUp(N-1));
   }
}
int main()
//call SumUp
{
    cout << "The sum for 12 is : " << SumUp(12);
    cout << "The sum for 4 is: " << SumUp(4);
    cout << "The sum for 3 is : " << SumUp(3);
    return(0);
}