//works:)
#include <iostream>
using namespace std;
int main()
{
    int number;
    int sum = 0;
    cout<< "Enter a number: ";
    cin>> number;
    cout << "Prime Factors: ";
    for(int i=2;i<=number;i++){
        if(number%i==0){
            if(i==2){
                cout << i << ", ";
                continue;
            }
            else if(i%2==0){
                continue;
            }
            bool IsPrime = true;
           for(int j=3; j<i/2; j+=2) {
               if(i%j==0){
                   IsPrime = false;
                   break;
               }
           }
           if(IsPrime){
               cout << i << ", ";
           }

        }
    }
    return(0);
}
         