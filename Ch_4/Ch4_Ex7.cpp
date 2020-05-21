// digits works
#include<iostream> 
using namespace std;
int main()
{
    long number;
    cout <<"Enter a positive integer: ";
    cin >> number;
    int onesdigit = number %10;
    long thing = 1000000000;
    bool foundleft = false;
    while(number%10!=0 || number/10!=0){
        long int1 = number/thing;
        if(int1 > 0){
            foundleft = true;   
        }
        if(foundleft){
            cout<<int1<<endl;
        }
        number=number%thing;
        thing = thing/10;
    }
    return(0);
}