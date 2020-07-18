#include <iostream>
using namespace std;
int main(){
    int *A, *B, *C;
    A = new int;
    (*A)=10;
    B=A;
    C = new int;
    (*C) = (*A);
    cout << (*A) << " " << (*B) << " " << (*C) << endl;
    (*A) = 23;
    cout << (*A) << " " << (*B) << " " << (*C) << endl;
}