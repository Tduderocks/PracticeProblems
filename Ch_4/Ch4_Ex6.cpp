//works:)
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    //interest p=I(1+r)^t
    const double r= 0.075;
    double m=2500;
    double time = 0;
    double increment = (m+(m*r));
    const long p = 5000;
    while(m<=5000){
        m=(m+(m*r));
        time ++;
    }

    cout <<" It will take " << time << " years to have at least $50000";
    return(0);

}