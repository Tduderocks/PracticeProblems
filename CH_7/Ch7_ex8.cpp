//chapter 7 excersies 8 works yay:)
#include <iostream>
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
       // cout << number << " , " << value1 << " , " << value2 << " ." << endl;
        return(true);
    }
    else {
        return(false);
    }
    
}
bool IsTriple(int one, int two, int three)
//determine if it is a triple
{
   // three = sqrt(pow(one,2)+pow(two,2));
    //cout << three << endl;
   // int sum = pow(one,2) + pow(two,2);
    if (PerfectSquare(three)){
       // cout << three << endl;
        return(true);
    }
    else{
        return(false);
    }
}
int main()
// calls perfect square
{
    int three;
    for (int j=1;j<=100;j++){
        {
            for(int h =1; h<=100;h++){
        three = (pow(j,2) + pow(h,2));
        if (IsTriple(j,h,three)){
            cout << j << " , " << h << " ," << three << "." << endl;
        }
        }
    }
    }
return(0);
}