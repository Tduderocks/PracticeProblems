//Chapter 5 Example 10 part a works! woot!
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
int main()
//calls reduce
{
    int Num,Den;
    cout << "Enter the numerator: ";
    cin >> Num;
    cout << "Enter the denominator: ";
    cin >> Den;
    Reduce(Num,Den);
    cout << "The reduced fraction is: " << Num << "/" << Den << endl;
    return(0);
}