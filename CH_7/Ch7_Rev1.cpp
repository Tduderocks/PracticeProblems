//Chapter 7 Reveiw 1 works :)
#include <iostream>
#include <math.h>
using namespace std;
//void DisplayExponents()
//display exponents 2^1 - 2^10

int main()
{
    //DisplayExponents;
    
    for(int i=1;i<=10;i++){
    cout.width(6);
    cout << "2^ "<< i;
    cout.width(6);
    int x=2;
    cout << pow (x,i);
    cout << endl;
    }
    return(0);
}