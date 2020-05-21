//Ch5 Reivew 4 works :) Could it be better? yes sting and return . width would do it too probably
#include <iostream>
using namespace std;


void SpanishName(int value)
//Displays the Spanish Equivalent of its int parameter
{
    if(value == 1){
        cout << "1     uno\n";
    }
    else if(value == 2){
        cout << "2     dos\n";
    }
    else if(value == 3){
        cout << "3     tres\n";
    }
    else if(value==4){
        cout << "4     cuatro\n";
    }
    else if(value ==5){
        cout << "5     cinco\n";
    }
}
//------------------------
int main(){
    for(int i=1;i<=5;i++){
        SpanishName(i);
    }
    return(0);
}