//chapter 7 review 17 works:) review 18 works:) review 19 works:) Ex 20 works:) 
#include <iostream>
#include <conio.h>
#include <math.h>
#include "..\Utility.h"
using namespace std;

void GiveDescription()
/*Provides description*/
{
    cout << "This program approximates the area under a curve by numerical integreation\n";
    cout << "Numerical Inegration calculates the area under a curve by summing the areas of a set of trapexoids \n";
    cout << "that represent hte curve. The user chosses the function(graph),endlimits & number of trapezoids\n";
    Pause();
}
int ChooseFunction()
/*Allows user to choose function from menu option.
  post: the function number chosen by user returned or 0 to quit*/
  {
      cout << "Function list \n";
      cout << " 0. Quit \n";
      cout << " 1. x^2\n";
      cout << " 2. x^2 +1\n";
      cout << " 3. sqrt(x)\n";
      cout << " 4. sin(x)\n";
      cout << " 5. log(x)\n";
      cout << " 6. x^3\n";
      cout << " 7. exp(x)\n";
      cout << " 8. fabs(x)\n";
      cout << " 9. cos(x)\n";
      int Choice = GetInt(0,9);
      return(Choice);
        }
double f(int FunctionNum, double x)
/*returns the value of the function at x
  pre: functionNum is a valid function
  f(x) is defined
  post: the value at x is retured */
  {
      switch (FunctionNum){
          case 1: return(x*x);
          case 2: return(x*x+1);
          case 3: return(sqrt(x));
          case 4: return(sin(x));
          case 5: return(log(x));
          case 6: return(x*x*x);
          case 7: return(exp(x));
          case 8: return(fabs(x));
          case 9: return(cos(x));
          default: return(0);
      }
  }
double approximate (int FunctionNum, double LowLimit, double HighLimit, int NumTraps)
/*Appoximates the area under a curve using trapezoids
  pre: functionMum is a defined functin
  post: the area is returned between high and low limit*/
  {
      double TrapWidth = (HighLimit - LowLimit)/NumTraps;
      double x = LowLimit;
      double Area = 0;
      for (int TrapCount = 1; TrapCount<=NumTraps; TrapCount++){
          Area += 0.5*(f(FunctionNum,x) + f(FunctionNum,x+TrapWidth)) * TrapWidth;
          x += TrapWidth;
      }
      return(Area);
  }
  double approximate2 (int FunctionNum, double LowLimit, double HighLimit, int NumTraps){
      double Midpoint = (LowLimit + HighLimit)/2;
      double Length = (HighLimit-LowLimit)/NumTraps;
      double x = LowLimit;
      double Area2 = 0;
      for (int RecCount =1; RecCount<=NumTraps; RecCount++){
          Area2 += (f(FunctionNum,Midpoint)) * Length;
          x += Length;
      }
      return(Area2);
  }
  void PerfectArea(int FunctionNum)
  //uses approximate repeatedly
  {
        double LowLimit, HighLimit, Area, Midpoint, Area2;
       int NumTraps;
       cout << "Enter the low limit: ";
       cin >> LowLimit;
       cout << "Enter the hight limit: ";
       cin >> HighLimit;
      double SubValue;
       do{
           int NumTraps = 8;
            Area = approximate(FunctionNum,LowLimit,HighLimit,NumTraps);
            NumTraps = NumTraps*2;
            SubValue = Area - Area;
       }while (fabs(SubValue)>=0.000001);
       cout << "The area using trapezoids is approximitly: " << Area << endl;
       Area2 = approximate2(FunctionNum,LowLimit,HighLimit,NumTraps);
       cout << "The area using rectangles is approximitly: " << Area2 << endl;
       Pause();
  }
  void FindRoots(int FunctionNum)
  //find the roots of the function
  {
      double HighLimit, LowLimit;
      do{
      cout << "Enter a high limit ";
      cin >> HighLimit;
      }while(f(FunctionNum, HighLimit) < 0);
      do{
      cout << "Enter a low limit ";
      cin >> LowLimit;
      }while(f(FunctionNum, LowLimit) >0);
      double SubValue;
      double MidpointY;
      do{
    double Midpointx = (LowLimit + HighLimit)/2;
    MidpointY = f(FunctionNum,Midpointx);
    if (MidpointY > 0)
    {
        LowLimit = MidpointY;
    }
    else if (MidpointY < 0){
        HighLimit = MidpointY;
    }
    SubValue = MidpointY-MidpointY;
      }while (fabs(SubValue)>=0.000001);
      cout << "The root is: " << MidpointY << endl;
      Pause();
  }
int main()
//calls function
{
    GiveDescription();
    while(true){
        int FunctionNum = ChooseFunction();
        if (FunctionNum ==0)
            break;
         PerfectArea(FunctionNum);
         FindRoots(FunctionNum);
    }
    return(0);
}