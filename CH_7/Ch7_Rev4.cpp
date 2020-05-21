//chapter 7 Review 4 works done:) Review 5?
#include <iostream>
#include <math.h>
using namespace std;
int Round(double x)
/*Returns x rounded to the nearest integer
  post: rounded x returned*/
  {
      if (x>0){
          double FractionPart = x-int(x);
                if(FractionPart<0.5){
                    cout << int(x) << endl;
                    return(int(x));
                }
                else{
                    return(int(x)+1);
                    cout << int(x) +1 << endl;
                 }
            }
      else {
          double FractionPart = int(x)-(x);
          if (FractionPart>0.5){
              cout << (int(x)) -1 << endl;
              return(int(x)-1);
          }
          else {
              cout << int(x) << endl;
              return(int(x));
          }
      }
  }
  double Round (double x,int NumDecimals)
  /*Returns x rounded tot hte NumDecimals decimal places
    Post: x to NumDecimal places is returned*/
    {   //cout.setf(ios::fixed);
        //cout.precision(NumDecimals);
        if (x>0){
          double FractionPart = x-int(x);
                if(FractionPart<0.5){
                    cout << int(x) << endl;
                    return(int(x));
                }
                else{
                    return(int(x)+1);
                    cout << int(x) +1 << endl;
                 }
            }
      else {
          double FractionPart = int(x)-(x);
          if (FractionPart>0.5){
              cout << (int(x)) -1 << endl;
              return(int(x)-1);
          }
          else {
              cout << int(x) << endl;
              return(int(x));
    }
      }
    }

int main()
  //call Round Function
  {
      Round(-1.6); //-2 works
      Round (-7.8); //-8 works
      Round(1.4); //works
      Round(4.3); // works
      Round(3.4568,2); //3.46
      Round(-1.24,1); //-1.2
      return(0);
  }