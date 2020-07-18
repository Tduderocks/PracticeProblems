//works yay done:)
#include <iostream>
#include "dateclass.h"
using namespace std;
int main(){
    int Month,Day,Year;
    DateClass Testing;
    Testing.SetDate(3,4,5);
    Testing.Write(cout);
    return(0);

}