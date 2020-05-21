//chapter 7 review 11
#include <iostream>
#include <math.h>
using namespace std;
void Review(int N){
    cout << "Entering function, N= " << N << endl;
    if(N>0){
        Review(N/2);
        cout << "Leaving function,  N =" << N << endl;
    }
}
int main(){
    Review(9);
    return(0);
}
