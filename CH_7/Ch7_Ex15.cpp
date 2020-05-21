//Chapter 7 Excersise 15 //wroks done:)
#include <iostream>
#include <math.h>
using namespace std;
void WhatZItDo()
//Descriotion: It finds the period and works backwards from there to reverse the letters.
{
    char ch = getchar();
    if(ch!='.'){
        WhatZItDo();
        cout << ch;
    }
    else{
        cout << endl;
    }
}
int main()
//calls vhatzitdo
{
    WhatZItDo();
    return(0);
}