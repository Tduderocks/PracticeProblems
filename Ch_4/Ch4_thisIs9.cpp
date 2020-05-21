//works :)
#include <iostream>
using namespace std;
int main()
{
    long integer;
    int sum = 0;
    cout << "Enter an integer: ";
    cin >> integer;
    long denominator = 1000000000;
    bool foundEnd=false;
    while(integer/10!=0 || integer%10!=0){
        long digit = integer/denominator;
        if (digit > 0){
            foundEnd = true;
        }
        sum = sum + (digit*digit*digit);
        integer = integer%denominator;
        denominator = denominator/10;
    }
    cout << "The sum of the cubes of the digits is  " << sum << endl;
    return(0);
}