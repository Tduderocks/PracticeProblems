//Chapter 5 number10 partb worksh:) Done :) It adds Fractions
#include <iostream>
using namespace std;
void Reduce(int &Numerator, int &Denominator)
/*Reduces a fraction
  post: creates a simplified fraction*/
{
    int smaller, bigger, gcf;
    if (Numerator < Denominator){
        smaller = Numerator;
        bigger = Denominator;
    }
    else{
        smaller = Denominator;
        bigger = Numerator;
    }
    for(int i=smaller; i >=1; i--){
        smaller%i;
        bigger%i;
        if((smaller%i==0) && (bigger%i==0)){
            gcf = i;
            break;
        }
    }
    Numerator = Numerator/gcf;
    Denominator = Denominator/gcf;
}
void ReadFraction(int &numerator, int &denominator)
//ask for the fraction from the user
{
    cout << "\tEnter the numerator: ";
    cin >> numerator;
    cout << "\tEnter the denominator: ";
    cin >> denominator;
    Reduce(numerator,denominator);
}
void DisplayFraction(int Numerator, int Denominator)
//Display the fraction
{
    cout << "The fraction is: " << Numerator << "/" << Denominator;
}
void AddFraction(int Numerator1, int Numerator2, int Denominator1, int Denominator2, int &SumNum, int &SumDen)
//Adds fraction
{
    SumDen = Denominator1*Denominator2;
    Numerator1 = Numerator1*Denominator2;
    Numerator2 = Numerator2*Denominator1;
    SumNum = Numerator1+Numerator2;
    Reduce(SumNum,SumDen);
}
int main()
// calls the functions
{
    int Numerator1,Numerator2,Denominator1,Denominator2,NumeratorSum,DenominatorSum;
    cout << "Enter the first fraction: \n";
    ReadFraction(Numerator1,Denominator1);
    DisplayFraction(Numerator1,Denominator1);
    cout << endl << "Enter the second fraction: \n";
    ReadFraction(Numerator2,Denominator2);
    DisplayFraction(Numerator2,Denominator2);
    cout << endl << "The sum of your fractions: ";
    AddFraction(Numerator1,Numerator2,Denominator1,Denominator2,NumeratorSum,DenominatorSum);
    DisplayFraction(NumeratorSum,DenominatorSum);
return(0);
}
