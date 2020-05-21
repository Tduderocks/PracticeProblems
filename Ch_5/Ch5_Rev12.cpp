//Review 12 works finally :)
#include <iostream>
using namespace std;
void FindLoHi( int x, int y, int &lessero,int &highero)
//Finds the higher and lower value of two integers
{
    if(x>y){
        highero = x;
        lessero = y;
    }
    else {
        lessero = x;
        highero = y;
    }
}
void FindLoHi(double z, double k, double &lesserD, double &higherD)
//Find the higher and lower value of two doubles
{
    if (z>k){
        higherD = z;
        lesserD = k;
    }
    else{
        lesserD = k;
        higherD = z;
    }
}
int main()
// calls each function
{
    int lesser,higher, a, b;
    a=2,b=4;
    cout << a << " and " << b << endl;
    double lesserDo,higherDo, c, d;
    FindLoHi(a,b,lesser,higher);
    cout << lesser << " is smaller than " << higher << endl;
    c=1.7, d=1.2;
    cout << c << " and " << d << endl;
    FindLoHi(c,d , lesserDo, higherDo);
    cout << lesserDo << " is smaller than " << higherDo << endl;
    return(0);
}