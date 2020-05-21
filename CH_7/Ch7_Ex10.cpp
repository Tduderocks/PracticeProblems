//Chapter 7 example 10 worksh dones:)
#include <iostream>
#include <math.h>
using namespace std;
int Rounders(double x)
//rounding
{
    double FractionPrat = x-int(x);
    if (FractionPrat<0.5){
        return(int(x));
    }
    else {
        return (int(x) +1);
    }
}
int Round(double x)
//testing function round
{
    return(int(x+0.5));
}
int main()
//call Round
{
    cout << "1.234 = " << Rounders(1.234) << endl;
    cout << "1.234 = " << Round(1.234) << endl;
    cout << "4.78 = " << Rounders(4.78) << endl;
    cout << "4.01 = " << Round(4.01) << endl;
    return(0);
}
// concluseion: yes it works because it is an integer!