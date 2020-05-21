//Chapter 8 reveiw 2 / works good:)
#include <iostream>
#include <vector>
using namespace std;
int main()
// my guess of output 23 ,61,(good)  
// 84,2,no (84,61) oh b/c 0 +1 is 1 it evaluates at 1 (good)
//61,98,23 (98,98,23) oh b/c number 1 is now number 2 which was 98
{
vector<int> Num(3);
Num[0] = 23;
Num[1] = 61;
Num[2] = 98;
cout << Num[0] << '|' << Num[1] << endl;
cout << Num[0] + Num[1] << '|' << Num[0+1] << endl;
Num[1] = Num[2];
Num[2] = Num[0];
Num[0] = Num[1];
cout << Num[0] << '|' << Num[1] << '|' << Num[2] << endl;
return(0);
}