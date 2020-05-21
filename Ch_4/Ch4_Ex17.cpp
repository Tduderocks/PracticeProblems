# include <iostream> // works:)
using namespace std;
int main()
{
int startingValue, EndingValue;
cout << "Enter the starting value: ";
cin >> startingValue;
cout << "Enter the EndingValue: ";
cin>> EndingValue;
//headings
cout.setf(ios::left);
cout.precision(0);
const int width = 10;
cout.width(width);
cout << "X" ;
cout << "X Squared   ";
cout << "X Cubed   " << endl;
int i;
cout.setf(ios::right);
for(i=startingValue;i<=EndingValue;i++){
    cout << (i);
    cout.width(10);
    cout << (i*i) ;
    cout.width(20);
    cout << (i*i*i) <<endl;
}

return(0);
}
