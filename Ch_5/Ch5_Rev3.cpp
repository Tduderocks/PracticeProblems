//Ch5 Review 3 works :)
#include <iostream>
using namespace std;
void DrawBar(int Length, char Mark)
//Displays a bar of lenght Length and character Mark
{
    for(int i=0;i<Length;i++){
        cout << Mark;
    }
    cout << endl;
    
}
//-------------------------------------
int main(){
    DrawBar(1,'*');
    DrawBar(2,'*');
    DrawBar(3,'*');
    DrawBar(4,'*');
    return(0);
}