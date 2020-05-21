//chapter 7 example 11 not sure
#include <iostream>
#include <math.h>
using namespace std;
long IntPower(long x, double n)
//Recursive formula for exponents
{
    double answer = (n/2) * (n/2);
    //int newanswer = answer*answer;
    if(n==0){
        return(1);
        cout << "1";
    }
    //else if(n%2==0){
       // return(IntPower(x,answer));
       // cout << "even";
    //}
    else{
    return(x*IntPower(x,answer));
    cout << "odd";
    }
}
//even n values: x^n/2 ^2 and odd n values: x*x^n/2 ^2
int main()
// calls intpower
{
    cout << IntPower(2,4) << endl;
    cout << IntPower(3,7) << endl;
    return(0);
}