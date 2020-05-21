//chapter 7 review 14 works :) done
#include <iostream>
using namespace std;
char LowerCase(char x)
//returns the lowercase equivalent of its char argument
{
    char answer;
    if ((x>65) && (x<91)){
         answer = x+32;
         return(answer);
    }
    else {
        return(x);
    }

}
int main()
// calls functoin
{
    cout << LowerCase('B');
    cout  << LowerCase('D');
    cout << LowerCase('a');
    return(0);
}