//Ch 5 Review 6 works:) 
#include <iostream>
using namespace std;
void DrawBar(int Length,char Mark)
//Draws a bar
{
for(int i=0;i<Length;i++){
    cout << Mark;
}
}
void DrawBox(int longness,char Design)
// Draws a box
{
DrawBar(4,'%');
cout << "" << endl;
DrawBar(4,'%');
cout << "" << endl;
DrawBar(4,'%');
cout << " "<<endl;
DrawBar(4,'%');
cout << " " << endl;
}
int main(){
DrawBox(4,'%');
return(0);
}