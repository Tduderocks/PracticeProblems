//chapter8 review 5 works yay:) done Review  6 done :) easy
#include <iostream>
#include <string>
#include <vector>
using namespace std;
double SumOfItems (const vector<double> &NumArray)
{
    double Sum=0;
    for (int Index=1; Index<NumArray.size();Index++)
    Sum +=NumArray[Index-1];
    return(Sum);
}
void LoadArray ( vector<double> &NumArray)
{
for (int Index=1; Index<NumArray.size()+1; Index ++){
    cout << "Enter Number " << Index << " : ";
    cin >> NumArray[Index-1];
    }
}
int main()
{
    int Number;
    cout << "How many numbers to enter? ";
    cin >> Number;
    //const int NumItems = 5;
    vector <double> DataArray(Number);

    LoadArray(DataArray);
    cout << "Average is " << (SumOfItems(DataArray)/(DataArray.size()-1));
    return(0);
}