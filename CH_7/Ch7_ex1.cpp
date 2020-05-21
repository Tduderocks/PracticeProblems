//chapter 7 example 1 works:) perfectamente buen done
#include <iostream>
#include <math.h>
using namespace std;
void heading()
//displays the heading
{
    const int Width = 7;
    cout.width(Width);
    cout << "x";
    cout.width(Width);
    cout << "x^2";
    cout.width(Width);
    cout << "x^3";
    cout.width(Width);
    cout << "x^4";
    cout.width(Width);
    cout << "x^5\n";
}
void values()
// diplay values
{
    const int width=7;
    for(int i = 1;i<=6;i++){
        cout.width(width);
        cout << i;
        cout.width(width);
        cout << pow(i,2);
        cout.width(width);
        cout << pow(i,3) ;
        cout.width(width);
        cout << pow(i,4);
        cout.width(width);
        cout << pow(i,5) << endl;
    }
}
int main()
//calls the functions
{
    heading();
    values();
    return(0);
}