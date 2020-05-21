// Ch 5 Review 15. It works:) woot woot digits !
#include <iostream>
using namespace std;
void FindDigits(int Number,int &Digit1, int &Digit2, int&Digit3 )
/* Displays the individual digits of a three digit number
   pre: Number must be three digits
   post: Display the digits individually */
{
    Digit1 = Number/100;
    Digit2 = (Number%100)/10;
    Digit3 = Number%10;
    cout << Digit1 << "," << Digit2 << ","<< Digit3 <<  endl;
}
int main()
// calls FindDigits
{
    int myNumber = 563;
    int a,b,c;
FindDigits(myNumber,a,b,c);
return(0);
}