//chapter 7 example 19 works yay done :)
#include <iostream>
#include <math.h>
#include <string>
using namespace std;
char Code(char letter, int number)
//takes a character and integer arguments. returns the coded character
{
    char SecretCodedLetter;
    SecretCodedLetter = letter + number;
    if (SecretCodedLetter <=90){
    return(SecretCodedLetter);
    }
    else {
        SecretCodedLetter = SecretCodedLetter - 26;
        return(SecretCodedLetter);
    }
}
int main()
//calls function
{
    cout << "B is : " <<  Code('B',4) << " using the code\n";
    cout << "Z is : " << Code('Z',3) << " using the code\n";
    cout << "Y is : " << Code('Y',5) << " using the code\n";
    return(0);
}