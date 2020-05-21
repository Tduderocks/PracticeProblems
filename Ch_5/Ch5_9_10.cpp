#include <iostream> // Ex 9 and 10 both work:)
using namespace std;
double PowerOf(double x, int n)
{
    double answer = x;
    for(int i=1; i<n; i++){
        answer *=x ;
    }
    return answer;
}

int main(){
    for(int j=1;j<=10;j++){
    cout << "2 to the power of " << j << " is " << PowerOf(2,j);
    cout << endl;
    }
    return 0;
}