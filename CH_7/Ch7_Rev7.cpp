//chapter 7 review 7 works:). Rev 8 works:)
#include <iostream>
#include <math.h>
using namespace std; 
long IntPower1(long x, int n)
/*returns x to the power of n
  pre: x and n are both nonzero
  post: x to the n is returned*/
  {
      double answer = x;
    for(int i=1; i<n; i++){
        answer *=x ;
    }
    return answer;
  }

  double IntPower2(long x, int n)
    // same, but uses recursio
  {   if(n>=0){
         if(n==0){
             return(1);
        }
        else {
              return(x*IntPower2(x,n-1));
        }
    }
    else{
        if (n==-1){
            return(1);
        }
        else {
            int PosN = abs(n);
            return(1/(x*IntPower2(x,PosN-1)));
        }
    }
  }
  int main()
  // calls functions
  {
      cout << IntPower1(3,4) << endl;
      cout << IntPower2(3,4) << endl;
      cout << IntPower2(2,-2) << endl;
      return(0);
  }