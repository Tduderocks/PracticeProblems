//chapter 7 example 6 a works:) b works:) c works:)
#include <iostream>
#include <math.h>
using namespace std;
double SinD(double x)
//
{   double radians,answer;
    radians = x * (3.14/180);
    answer = sin(radians);
    return(answer);
}
double CosD(double x)
//
{
    double radians,answer;
    radians = x*(3.14/180);
    answer = cos(radians);
    return(answer);
}
void DisplayTable()
//
{
    const int width = 10;
    cout.precision(3);
    int Incrementstep = 10;
    cout.width(width); // heading
    cout << "Degrees ";
    cout.width(width);
    cout << "Sin(x)";
    cout.width(width);
    cout << "Cos(x)\n";
    for(int i=0;i<=360;i+=Incrementstep){ 
        cout.width(width);
        cout << i;
        cout.width(width);
        cout << SinD(i);
        cout.width(width);
        cout << CosD(i);
        cout << endl;
    }


}
int main()
//calls function
{
    DisplayTable();
    return(0);
}