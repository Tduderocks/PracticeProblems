//Chapter 7 Review9 works:)
#include <iostream>
#include <math.h>
using namespace std;
double MyPow(int x, int y)
//calculates powers
{
    double answer;
    answer = exp(y*log(x));
    return(answer);
}
int main()
//calls mypow
{
    cout << pow(2,4) << " is 2,4 pow\n";
    cout << MyPow(2,4) << "is 2,4 my pow\n"; //good
    cout << pow(-2,3) << " is -2,3 pow\n";
    cout << MyPow(-2,3) << " is -2, 3 my pow\n"; // doesn't work nan
    cout << pow(4,-2) << " is 4, -2 pow\n";
    cout << MyPow(4,-2) << " is 4,-2 mypow\n"; //good
    return(0);
}
// conclusion: mypow needs to be a double becasue of the logarithm