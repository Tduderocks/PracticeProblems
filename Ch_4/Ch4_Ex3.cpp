//Example 3 part a works done:)
#include <iostream>
using namespace std;
int main()
{
    double price;
    int Eggs;
    double dozen;
    double extra;
    double cost;
    cout.precision(3);
    cout.setf(ios::fixed);
    cout <<"Enter the number of eggs ";
    cin >> Eggs;
    dozen = (Eggs/12);
    extra = (Eggs%12);
    if (dozen>=0 && dozen<4){
    price = ((0.50*dozen) +((1.0/12.0)*0.50*extra));
    cost = 0.50;
    }
    else if(dozen>=4 && dozen<6){
    price = ((0.45*dozen) +((1.0/12.0)*0.45*extra));
    cost = 0.45;
    }
    else if (dozen>=6 && dozen<11){
    cost = 0.40;
    price = ((0.40*dozen) +((1.0/12.0)*0.40*extra));
    }
    else if (dozen >=11){
    price = ((0.35*dozen) + ((1.0/12.0)*0.35*extra));
    cost = 0.35;
    }
    cout << "Your cost is $ "<< cost << " per dozen or " << (price/Eggs)<<" per egg\n";
    cout << "Your bill comes to $" << price << endl;
}