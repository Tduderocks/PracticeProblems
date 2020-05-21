//ch 4 excersise 11 a works & b works:) 
#include<iostream>
using namespace std;
int main()
{
    
    int Sinteger,Einteger;
    int sum = 0;
    cout << "Enter starting number: ";
    cin >> Sinteger;
    cout << "Enter ending number: ";
    cin >> Einteger;
    for(int x = Sinteger; x <= Einteger;x++){
        if (x==2)
        {       
            sum = (sum + 1);
        }
        else if(x%2==0)
        {
            // cout<< x << " is even" << endl;
            continue;
        }
        else{
            bool prime=true;
            for(int i=3;i<x/2;i+=2){
                cout<<x<<"%"<<i<<"="<<x%i<<endl;
                if (x%i == 0){
                    prime = false;                    
                    break;
                }                
            }
            if(prime)
            {
                cout << x << " is prime" << endl;
                sum++;
            }
        } 
    }
        cout << "The number of primes in range: " << sum << endl;
    return(0);
}