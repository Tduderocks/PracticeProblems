//Chapter 7 example 12 worksh done:)
#include <iostream>
#include <math.h>
using namespace std;
void Exer(int N)
{
    cout << "Starting" << N << endl;
    if(N>0){
        Exer(N/3);
        cout << "Middle" << N << endl;
    }

}
int main()
//call the function
{
    cout << "13 is : ";
    Exer(13); //4 (13,4,1,0,1,4,13)
    cout <<" 3 is : " ;
    Exer(3); //1 (3,1,0,1,3)
    cout << " 0 is :";
    Exer(0); // starting only
    return(0);
}