//Chapter 8 Review 13
// set of definitions to create an array that would store the number of times
// the word "internet" appeared in the NYT during each of the years 1960-1996
#include <iostream>
#include <vector>
#include <string>
using namespace std;
typedef vector <int> MonthType;
void Display(int MonthType &Month)
//Display the count in the months
{
    cout << "Month" << "  " << "Count" << endl;
    for(int Month = 1; Month<=12; Month++)
}
int main()
//call function
{
    int MonthType month;
    Display(month);
    return(0);
}
