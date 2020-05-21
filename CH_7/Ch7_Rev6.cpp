//Chapter 7 Rev6 done:)
//Starting with o it prints out increments of 0.1
#include <iostream>
using namespace std;
int main(){
    double S=0;
    do{
        S+= 0.1;
        cout << "Value is " << S << endl;
    }while(S!=1);
    return(0);
}