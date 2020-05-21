//chapter 7 example 13 works done:)
#include <iostream>
#include <math.h>
using namespace std;
void Exer(int N)
{
    cout << N << endl;
    if(N>0){
        if(N%2==1){
            Exer(N/3);
        }
        else {
            Exer(N/2);
        }
    }
}
int main()
//calls exer function
{
    cout << "13 is: "; //4,2,1,0
    Exer(13);
    cout << endl << " 14 is: "; // 7,2,1,0
    Exer(14);
    cout << endl << " 15 is: "; // 5,1,0
    Exer(15);
    return(0);
}