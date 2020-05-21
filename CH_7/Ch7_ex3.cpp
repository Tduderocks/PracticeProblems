//chapter 7 example 3
#include <iostream>
using namespace std;
bool IsFactor(int integer1, int integer2) // I dont think i need this
//returns true if integer 1 is a factor of integer 2
{
    if (integer2%integer1==0){
        return(true);
    }
    else {
        return(false);
    }
}
bool IsPerfect(int number)
// determines if a number is a perfect number
{ int sum;
        for (int j=(number-1);j>=1;j--){
            sum=0;
            if (IsFactor(number,j)){  //determines factors
                sum = sum +j;
            }
        }
    if (sum==number){ // if when you add factors they equal the origgional number
    return(true);
     }
    else {
     return(false);
    }     
}
int main()
//calls functions
{
    for(int i=2;i<=100;i++){
        if(IsPerfect(i)){
            cout << i << " is a perfect number\n";
        }
    }
    return(0);
}