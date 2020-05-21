//chapter 7 example 18 // works done :)
#include <iostream>
#include <math.h>
using namespace std;
double FindCubeRoot(int N)
//Find cube root using Newtons method
{
    double NewGuess=1; 
    double OldGuess = 1;
    double SubValue;
    do{
        OldGuess = NewGuess;
        NewGuess = OldGuess-(pow(OldGuess,3)-N)/(3*pow(OldGuess,2));
        SubValue = NewGuess - OldGuess;
        cout << NewGuess << endl;
        // OldGuess = NewGuess;
    }while (abs(SubValue) >=0.000001);
    return NewGuess;
}
int main()
//call FindCube Root
{
    double rootToFind;
    cout << "Enter root you want found ";
    cin >> rootToFind;

    double root = FindCubeRoot(rootToFind);
    cout << "Cube root of " << rootToFind << " is: " << root;
    
    return(0);
}