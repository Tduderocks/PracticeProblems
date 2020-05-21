#include <iostream> //works:)
using namespace std;
int main(){
    int Number1, Number2;
    int sum = 0;
    cout << "Enter Starting Number " << endl;
    cin >> Number1;
    cout << "Enter Ending Number " << endl;
    cin >> Number2;
    cout << "" << endl;
    for(int i=Number1;i<=Number2;i++){
        sum += i;
    }

    cout << "The sum of integers from " << Number1 << " to " << Number2 << " is " << sum << endl;
    return (0);
    }