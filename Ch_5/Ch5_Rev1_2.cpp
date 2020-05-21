//Ch 5 Time Conversion Program Rev 1: works:)   & Rev2: works:)
#include <iostream>
using namespace std;
//-------------------------------------------
void Introduction()
//Introduces the program
{
    cout << "Welcome to the time conversion!" << endl;
    cout << "Here, you will be choosing to convert either days to hours, hours to days or hours to minutes\n";
}
//-------------------------------------------
void DaysToHours()
//Converts Days to Hours
{
    int days,hours;
    cout << "Enter the number of days ";
    cin >> days;
    hours = days*24;
    cout << "The number of hours in "<< days << " days is: " << hours;
}
//------------------------------------------
void HourToDays()
//Converts hours to days
{
    int hours,days;
    cout <<"Enter the number of hours ";
    cin >> hours;
    days = hours/24;
    cout << "The number of days in "<< hours << " hours is: " << days;
}
//-------------------------------------------
void HoursToMinutes()
//Converts hours to minutes
{
    int hours,minutes;
    cout << "Enter the number of hours: ";
    cin >> hours;
    minutes = hours*24;
    cout << "The number of minutes in "<<hours << " hours is: " << minutes;
}
int main(){
    char choice;
    cout <<"1 days to hours\n";
    cout <<"2 hours to days\n";
    cout << "3 hours to minutes\n";
    cout << "Enter your choice: ";
    cin >> choice;
    if(choice=='1'){
        DaysToHours(); //Function call
    }
    else if(choice == '2'){
        HourToDays(); // Fucntion call
    }
    else
    {
        HoursToMinutes(); //Function call
    }
    return(0);
}