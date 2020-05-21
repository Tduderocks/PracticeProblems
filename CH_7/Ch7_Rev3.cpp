//Ch7 Review 3 works :) done
#include<iostream>
#include <math.h>
using namespace std;
int main(){
    const double PI=3.14;
    const int Width = 6;
    const int Precision = 3;
    cout.setf(ios::fixed);
    cout.precision(Precision);
    const int MaxAngle = 90;
    const int AngleStep = 5;
    cout << "Angle sin() cos() SumSq"<< endl;
    for (int Angle = 0; Angle<=MaxAngle; Angle +=AngleStep){
        cout.width(Width);
        double RadAngle = (PI/180)*Angle;
        double Base = sin(RadAngle) + cos(RadAngle);
        double exponent = pow(Base,2);
        cout << Angle;
        cout.width(Width);
        cout << sin(RadAngle);
        cout.width(Width);
        cout << cos(RadAngle);
        cout.width(Width);
        cout << exponent;
        cout << endl;
    }
    return(0);
}
