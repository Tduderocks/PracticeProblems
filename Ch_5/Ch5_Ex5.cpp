// Chapter 5 ex 5 a,b: works:) c: added to Library :) and d:tested :) works done :)
#include <iostream>
using namespace std;
void DisplayFormatted(int n, int width)
/*Displays the value of n left-aligned in a field of size width.
  Post: Value displayed left-aligned in a field of size Width*/
{
    cout.setf(ios::left);
    cout.width(width);
    cout << n << endl;
}
void DisplayFormatted(double x, int widthOfDouble, int decimalPoints)
//
{
    cout.setf(ios::fixed);
    cout.precision(decimalPoints);
    cout.setf(ios::left);
    cout.width(widthOfDouble);
    cout << x << endl;
}
int main()
// Calls Display Formatted n and x
{
    DisplayFormatted(6753,10);
    DisplayFormatted(14.7898,10,0);
    return(0);
}