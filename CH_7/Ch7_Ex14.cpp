//Chapter 7 example 14 works done:)
#include <iostream>
#include <math.h>
using namespace std;
void Exer(int N)
{
    if (N>0){
        cout << (N%10);
        Exer(N/10);
    }
}
int main()
//call exer
{
    cout << "13 is: "; //Remainder 3, divide 1
    Exer(13);
    cout << endl << " 124 is: "; // remainder 4, 2, 1,
    Exer(124);
    cout << endl << " 21785 is: "; // 5, now 2178 = 8, now 217 = 7, now 21 = 1, now 2 = 2 ok b/c 2/10 = 0 remainder 2
    Exer(21785);
    return(0);
}
