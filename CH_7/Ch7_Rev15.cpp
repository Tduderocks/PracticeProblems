//Chapter 7 Review 15 works woot :) & Review 16 works :) do i worry about day cut offs of seasons?
#include <iostream>
using namespace std;
enum MonthType{January,Febuary,March,April,May,June,July,August,September,October,November,December};
int NextMonth(MonthType Month)
//
{
    return(Month + 2);

}
void PrintMonth(int Month){
    // displays month as a string
    switch(Month){
        case 1 : cout << "January"; break;
        case 2 : cout << "Febrary "; break;
        case 3 : cout << "March"; break;
        case 4 : cout << "April"; break;
        case 5 : cout << "May"; break;
        case 6 : cout << "June";break;
        case 7 :cout << "July"; break;
        case 8:cout << "August";break;
        case 9:cout << "September";break;
        case 10 : cout << "October";break;
        case 11 : cout << "November"; break;
        case 12 : cout << "December"; break;
        default : cout << "Invalid Month"; break;
    }
}
void PrintSeason(int Month)
// Displays season
{
    switch(Month){
        case 1 :
        case 2 :
        case 12 : cout << " :Winter" << endl;break;
        case 3 :
        case 4:
        case 5:
        case 6: cout << " :Spring" << endl; break;
        case 7:
        case 8:
        case 9: cout << " :Summer" << endl; break;
        case 10:
        case 11: cout << " :Fall" << endl; break;
    }
}
int main()
//Calls function
{
    int month1 = NextMonth(January);
    PrintMonth(month1);
    PrintSeason(month1);
    int month2 = NextMonth(July);
    PrintMonth(month2);
    PrintSeason(month2);
    return(0);
}