// Chapter 5 Example 4
#include <iostream>
using namespace std;
void DisplayWithCommas(long number)
/* Displays 10 digit number with commas in between
   pre: number up to 10 digit numbers
   post : displays number with commas */
{
    long answer;
    if(number/1000000000==1){
        cout << number/100000000 << " , " ;
    }
    else if(number/100000000==1){
        cout << number/10000000 << " , ";
    }
    else if(number/10000000==1){
        cout << number/100000 << ", ";
    }
    else if(number/1000000==1){
        cout << number/1
    }
    else if(number/100000==1){
        answer=number;
    }
    else if(number/10000==1){
        answer=number;
    }
    else if (number/1000==1){
        answer=number;
    }
    else {
        cout << number;
    }
} 
int main()
//call function
{
    DisplayWithCommas(12456);
    return(0);
}
