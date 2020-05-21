// Chapter 5 Review 16 works :)
#include <iostream>
using namespace std;
int SecondsFrom (int TotalSeconds)
/*Returns the number of seconds left when converting TotalSeconds to H/M/S form
  TotalSeconds assumed >=0*/
{
    return((TotalSeconds%3600)%60);
}
int MinutesFrom (int TotalSeconds)
/*Returns the number of minutes when converting TotalSeconds to H/M/S form
  TotalSeconds assumed >=0*/
{
    return((TotalSeconds%3600)/60);
}
int HoursFrom (int TotalSeconds)
/* Returns the number of hours when converting TotalSeconds to H/M/S form
   TotalSeconds assumed >=0*/
{
    return(TotalSeconds/3600);
}
int main()
// calls SeondsFrom, MinutesFrom and HoursFrom
{
    int TheSeconds = 5000;
    cout << "H: " << HoursFrom(TheSeconds) << " M: " << MinutesFrom(TheSeconds) << " S: " << SecondsFrom(TheSeconds) << endl;
    return(0);
}