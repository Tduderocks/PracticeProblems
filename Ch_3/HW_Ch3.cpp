/* Homework Chapter 3 page 3-22*/
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    Ex 1
    double h,t;
    cout << "Enter the time :  ";
    cin >> t ;
    cout << " The Object is at " << (h=100-4.9*t*t) << " meters" << endl;
    //ex 2
    double c,f,a;
    a = 5.0/9;
    cout << "Enter the temperature in Fahrenheit: ";
    cin >> f;
    cout << "The temperature in Celcius is " << (c=a*(f-32.0)) << " degrees." << endl;
    ex 3
    double d,o;
    cout << "Enter the size of the pizza: " ;
    cin>> d;
    cout << "The cost is:$ " << (o=1.20+0.05*d*d) << endl;
    //ex 4
    double k,z;
    cout << "Enter the average speed: " ;
    cin >> k;
    cout << " The trip to school will take " << (z=32/k) << " minutes." << endl;
    //ex 5 : question on part 2 //
    double m;
    cout << "Enter the mass in kg: ";
    cin>> m;
    cout << "This mass could produce " << (m*3.0*pow(10,8)*3.0*pow(10,8)) << " Joules of engergy.";
    cout << "It could power " << (m*3.0*pow(10,8)*3.0*pow(10,8)/360000) << " 100-watt light bulbs for an hour" << endl;
    //ex 6//
    int x,y;
    cout<< "Enter first integer ";
    cin >> x;
    cout << "Enter second integer ";
    cin >> y;
    cout << x << "/" << y << "=" << (x/y) << endl;
    cout << x << "%" << y << "=" << (x%y) << endl;
    cout << y << "/" << x << "=" << (y/x)  << endl;
    cout << y << "%" << x << "=" << (y%x)  << endl;
    //ex 7//
    int p;
    cout << "Enter the number of players: ";
    cin >> p;
    cout << "There will be " << (p/7) << " teams with " << (p%7) << " left over. " << endl;
    //ex 8 why cant it work for 184 is 3:04//
    int u;
    cout << "Enter the number of minutes: ";
    cin >> u;
    cout << "This is " << (u/60) << ":" ;
    int l = u%60;
    cout << l/10 << l%10 << endl;
    //ex9//
    int change;
    cout << "Enter the amount of change in cents: " ;
    cin >> change;
    cout << "Change: " << endl;
    cout << "\tQuarters: " << (change/25) << endl;
    change=change%25;
    cout << "\tDimes: " << (change/10) << endl;
    change=change%10;
    cout << "\tNickels: " << (change/5) << endl;
    change=change%5;
    cout << "\tPennies: " << (change) << endl;*/
    //Ex 10
    int digit;
    cout << "Enter a three digit number: ";
    cin >> digit;
    cout<< "The first digit is " << (digit/100) << endl;
    int second_digit = digit%100;
    cout << "The second digit is " <<(second_digit/10) << endl;
    int thrid_digit = second_digit%10;
    cout << "The third digit is " << (thrid_digit) << endl;
    int first_digit = (digit/100);
    cout << "The sum of the digits is " <<(first_digit+(second_digit/10)+thrid_digit) << endl;
    //Ex 11 
    int pots;
    cout<< "Enter the number of flower pots to ship: "<< endl;
    cin >> pots;
    if(pots<0)
    cout << "The number of post entered was: " << pots << endl;
    cout << "Negative pots are illigal \n";
    cout << "We will ship: " << endl;
    cout << "\t" << (pots/9) << " very big box(s)" << endl;
    int rem = pots%9;
    if(pots>=0) // only diplay when pos or 0 ?
    cout << "\t" << (rem/4) << " box(s)" << endl;
    cout << "\t" << (rem%4) << " small box(s)" << endl;
    // ex 12 works :)
    int bmonth, bday, byear, tmonth, tday, tyear;
    cout << "Enter your birthdate (Using numbers for months): \n";
    cout << "\t Month: ";
    cin>> bmonth;
    cout << "\t Day: ";
    cin >> bday;
    cout << "\t Year: ";
    cin>> byear;
    cout << "Enter today's date(using numbers for months): \n";
    cout << "\t Month: ";
    cin >> tmonth; 
    cout << "\t Day: ";
    cin >> tday;
    cout << "\t Year: ";
    cin>> tyear; 
    cout << "You have been alive for " << (((tyear - byear)*365)+(tmonth-bmonth)*30+(tday-bday)) << " days." << endl;
    cout << "You have slept for " << (((tyear - byear)*365*8+(tmonth-bmonth)*30*8 + (tday-bday)*8)) << " hours." << endl;
    //ex 13
    int burgers,fries,sodas;
    cout << "Enter the number of burgers: ";
    cin >> burgers;
    cout << "Enter the number of fries: ";
    cin >> fries;
    cout<< "Enter the number of sodas: ";
    cin >> sodas;
    cout<<"";
    double total = (1.49*burgers + 0.89*fries + 0.99 * sodas);
    cout << "The total before tax is: $" << total << endl;
    cout << "The tax is: $ " << total*0.06 << endl;
    cout << "The grand total is : $" << total*1.06 << endl;
    //ex 14
    double des,cod,deb,tes;
    cout << "How long do you spend designing: " ;
    cin>> des;
    cout << "How long do you spend coding: ";
    cin >> cod;
    cout << "How long do you spend debugging: ";
    cin>> deb;
    cout << "How long do you spend testing: ";
    cin>>tes;
    int totalt = des + cod + deb + tes;
    double percentdes = 100*double (des)/totalt;
    double percentcod = 100*double (cod)/totalt;
    double percentdeb= 100*double (deb)/totalt;
    double percenttes=100*double (tes)/totalt;
    const int ColW = 15;
    cout.setf(ios::fixed);
    cout.precision(2);
    cout.setf(ios::left);
    cout.width(ColW); cout <<"Topic";
    cout.width(ColW); cout << "Time";
    cout.width(ColW); cout << "Percentages" << endl;
    cout.width(ColW); cout << "Designing";
    cout.width(ColW); cout << des;
    cout.width(ColW); cout << percentdes << endl;
    cout.width(ColW); cout << "Coding";
    cout.width(ColW); cout << cod;
    cout.width(ColW); cout << percentcod << endl;
    cout.width(ColW); cout << "Debugging";
    cout.width(ColW); cout << deb;
    cout.width(ColW); cout << percentdeb << endl;
    cout.width(ColW); cout << "Testing";
    cout.width(ColW); cout << tes;
    cout.width(ColW); cout << percenttes << endl;
    
    return(0);
}