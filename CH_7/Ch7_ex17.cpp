//chapter 7 excersies 17 works but doesn't use recursion
#include <iostream>
#include <math.h>
using namespace std;
int NumDigits (int x)
//recursive, returns the number of digits in its integer parameter
{
    if (x==0){
        return(1);
    }
    else 
    {
        int number;
        if(x/10000>=1){
            number = 5;
        }
        else if(x/1000>=1){
            number = 4;
        }
        else if(x/100>=1){
            number = 3;
        }
        else if(x/10>=1){
            number =2;
        }
        else {
            number = 1;
        }
        return(number);
    }

}
int main()
//call and test NumDigits
{
   cout << "235 has : " <<  NumDigits(235) << "digits\n";
   cout << "2 has: " << NumDigits(2) << " digits\n";
   cout << "2355 has: " << NumDigits(2355) << " digits\n";
   cout << "22222 has: " << NumDigits(22222) << " digits\n";
    return(0);
}