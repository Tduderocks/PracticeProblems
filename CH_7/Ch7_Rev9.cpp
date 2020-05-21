// Chapter7 review 9 works :) trippy!
#include <iostream>
#include <math.h>
using namespace std;
long Factorial(int x)
// returns the facotial of an int.
{
    long TheFactorial;
    if (x==0){
        return(1);
    }
    else{
        return(x*Factorial((x-1)));
    }
    return (TheFactorial);
}
int main(){
// calls Factorial
cout << Factorial(3) << endl;
cout << Factorial (5) << endl;
return(0);
}