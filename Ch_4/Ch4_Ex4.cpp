//Chapter 4 Example 4a works:) & 4b works:)
#include<iostream>
using namespace std;
int main()
{
    int hours, extraHours;
    char Answer;
    int normHours = 40;
    double rate, gross;
    cout <<"Enter hours worked\n";
    cin >> hours;
    cout <<"Enter hourly rate \n";
    cin >> rate;
    cout<< "Are you excempt?(Y/N) \n";
    cin >> Answer;
    if(hours<41 && Answer =='Y'){
        gross = (hours*rate);
        cout << "Gross wages = " << gross << endl;
        cout << "NO TAXED DEDUCTED" << endl;
    }
    else if(hours>40 && Answer =='Y'){
        extraHours = (hours-normHours);
        gross =((hours*rate) + (extraHours*1.5*rate));
        cout << "Gross wages = " << gross << endl;
        cout << "NO TAXES DEDUCTED" << endl;
    }
    else if (hours <41 && Answer =='N'){
        gross = ((hours*rate)-(hours*rate*0.18));
        cout << "Gross wages = " << gross << endl;
    }
    else if(hours>40 && Answer =='N'){
        gross = (((hours * rate)+(extraHours*1.5*rate))-((hours*rate)+(extraHours*1.5*rate))*0.18);
        cout << "Gross wages = $ " << gross << endl;
    }
    
    return(0);
}