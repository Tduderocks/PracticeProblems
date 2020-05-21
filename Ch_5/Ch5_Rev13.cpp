// Review 13 // works woot wooot :)
#include <iostream>
using namespace std;
void SetLoHi (int &x, int&y){
    if(x<y){
        y = x;
        x = y;
    }
}
int main(){
    int a,b;
    a = 4, b = 7;
    SetLoHi(a,b);
    cout << a << " smallest then " << b <<  " is bigger" << endl;
    int c,d;
    c = 8, d = 2;
    SetLoHi(c,d);
    cout << c << " smallest then " << c << " is bigger " << endl;
    return(0);
}