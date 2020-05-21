// Chapter 7 Review 2 // works yaya done:)
#include <iostream>
#include <math.h>
using namespace std;
bool PerfectSquare(double number)
//returns true if it is a perfect square
{
    double value1, value2, value12;
    value1 = sqrt(number);
    double FractionPart = value1 - int(value1);
    if (FractionPart < 0.5){
        value1=value1 - FractionPart;
    }
    else{
        value1 = value1+1;
    }
    value2 = pow(value1,2);
    if (number==value2){
        cout << number << " , " << value1 << " , " << value2 << " ." << endl;
        return(true);
    }
    else {
        return(false);
    }
    
}
int main()
// calls perfect square
{
    for (int j=1;j<=20;j++){
        if (PerfectSquare(j)){
            cout << j <<endl;
        }
        
    }
return(0);
}
