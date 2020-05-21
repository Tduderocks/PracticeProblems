// ex 10
#include <iostream> //works:)
using namespace std;
int main(){
    int number1,number2;
    int numberOfSteps =0;
    cout << "Enter the first number: ";
    cin >> number1;
    cout << "Enter the second number: ";
    cin >> number2;
    int First=number1;
    int Second = number2;
    int remainder = 0;
    cout << number1 << ", " << number2;
    do{
        remainder = (First + Second)%10;
        First = Second;
        Second = remainder;
        numberOfSteps = numberOfSteps +1;
        cout << ", " << remainder ;
    }while((First!=number1) || (Second!=number2));
    
    cout << endl <<"Your number requires " << numberOfSteps << " steps" << endl;
    return(0);
    
}