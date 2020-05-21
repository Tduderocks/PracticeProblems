//chapter 4 example 3b works :)
#include <iostream>
using namespace std;
int main()
{
    //fist column
    cout.setf(ios::left);
    cout.width(10);
    int number = 1;
    cout.setf(ios::fixed);
    cout.precision(2);
    double price;
    for(number=1;number<=120;number ++){
        cout <<number << "       " << (number*0.04) << endl;
    }
    return(0);

}