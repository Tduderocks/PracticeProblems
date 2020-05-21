//Review #11 works :)
#include <iostream>
using namespace std;
void DaysToHours (int Days, int &Hours, int &Minutes)
//Takes in a number and returns the hours and minutes for it
{
    Hours = Days*24;
    Minutes = Hours*Days;
}
int main()
// calls days to hours and outputs for days 1-10
{
    for(int i =1;i<=10;i++){
        int h,m;
        DaysToHours (i, h, m);
        cout << i << " day/(s) is " << h << " or " << m << " minutes " << endl;
    }
    return(0);
}

