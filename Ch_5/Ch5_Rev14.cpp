//Ch5 Review 14 :)works
#include <iostream>
using namespace std;
void DisplayWithDecimals(double Num, int NumDecimals)
/* Displays Num to NumDecimals places
   post : Num Displayed to NumDecimal Places*/
{
    cout.precision(NumDecimals + 1);
    cout << Num;
}
int main()
// calls DisplayWithNumbers
{
    DisplayWithDecimals(4.65789,2);
    return(0);
}