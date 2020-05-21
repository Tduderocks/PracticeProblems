//Chapter 7 Example 4. works :) all the same
#include <iostream>
#include <math.h>
using namespace std;
void Numbers(){
    for (int i=1;i<=100;i++){
        int x = i*i;
        int width = 7;
        cout.width(width);
        cout << i;
        cout.width(width);
        cout << sqrt(x);
        if(i!=sqrt(x)){
            cout.width(width);
            cout << "NotEq";
        }
        cout << endl;
    }
}
int main()
//call the function
{
    Numbers();
    return(0);
}