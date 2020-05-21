//Chapter 5 Example 6. a works:) b works:) done :)
#include <iostream>
using namespace std;
bool IsPrime(long integer)
//determines if the number is prime
{
    cout << "The number: " << integer;
    bool prime;
    if(integer==2){
        prime = true;
    }
    else if(integer%2==0){
        prime = false;
    }
    else if((integer%2!=0) && (integer >=3)){
        for(int i=3;i<integer;i++){
            integer%i;
            if(integer%i==0){
                prime = false;
                break;
            }
            else{
                prime = true;
            }
        }
    }
    
    if (prime == true){
        cout << " is prime" << endl;
    }
    else {
        cout << " is not prime" << endl;
    }
    return(prime);
}
int main()
//calls is prime
{
    for(int k=2;k<=100;k++){
    IsPrime(k);
    }
return(0);
}