//Ch 4 Ex 2 works:)
#include <iostream>
using namespace std;
int main()
{
double weight, length, width, height;
cout << "Enter weight of package in Kilograms ";
cin >> weight;
cout << "Enter length of the package ";
cin >> length;
cout << "Enter the width of the package ";
cin >> width;
cout << "Enter the height of the package ";
cin >> height;
double volume = (length* width * height);
if(weight > 27 && volume > 0.1){
    cout << "Rejected: Package is too heavy and too large";
}
else if(weight <= 27 && volume >0.1){
    cout << "Rejected: Package is too large";
}
else if(weight > 27 && volume < 0.1){
    cout << "Rejected: Package is too Heavy";
}
}