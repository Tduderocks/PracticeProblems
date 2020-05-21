// Chapter 7 ex7 a works:) b worksh:) c works:) d works:)test values..?
#include <iostream>
#include <math.h>
#include "..\Utility.h"
using namespace std;
int Quadrant(int x, int y)
// takes the x and y coordinates of a point and returns wither 1,2,3, or 4
{
    int quadrantNum;
    if ((x>0) && (y>0)){
        quadrantNum = 1;
    }
    else if ((x<0)&&(y>0)){
        quadrantNum = 2;
    }
    else if((x<0)&&(y<0)){
        quadrantNum = 3;
    }
    else{
        quadrantNum = 4;
    }
    return(quadrantNum);
}
void RectToPolar(int x, int y, double &radius, double &angle)
//takes xy coordinates in cartegian and returns coordinate in polar
{
    radius = sqrt((x*x) + (y*y));
    if(x!=0){
    angle = atan(y/x);
    }
    else {
        cout << "the angle is undefined \n";
        radius = 0;
        angle =0;
    }
}
void PolarToRect(double radius, double angle, double &x, double &y){
    if ((angle>=0)&&(angle<=90)){
    x = radius * cos(angle);
    y = radius * sin(angle);
    }
    else if ((angle>=270) && (y<=360)){
    x = radius * cos(angle);
    y = -1* radius * sin(angle);
    }
    else if ((angle>=180)&&(angle<270)){
    x = -1* radius * cos(angle);
    y = -1* radius * sin(angle);  
    }
    else {
    x = -1* radius * cos(angle);
    y = radius * sin(angle);  
    }
}
int MenuOptions()
//Display formula options
{
    cout << "Convertion options: \n";
    cout << " 0 to quit\n";
    cout << " 1. Determine the quadrant\n";
    cout << " 2. Rectangular to polar coordinates\n";
    cout << " 3. Polar to Rectangular coordinates\n";
    cout << "Enter your choice: ";
    int Choice = GetInt(0,3);
    return(Choice);
}
int main()
//calls functions
{   
    double x,y, xnow, ynow;
    int option;
    option = MenuOptions();
    while(option!=0){
    if (option == 1){
        cout << "Enter your x coordinate: ";
        cin >> x;
        cout << "Enter your y coordinate: ";
        cin >> y;
        cout << "The corrdinate is in quadrant " << Quadrant(x,y);
        Pause();
    }
    else if (option == 2){
        cout << "Enter your x coordinate: ";
        cin >> x;
        cout << "Enter your y coordiante: ";
        cin >> y;
        PolarToRect(x,y,xnow,ynow);
        cout << "The poloar corrdinate is: " << xnow << " , " << ynow << endl;
        Pause();
    }
    else if (option == 3){
        cout << "Enter your radius: ";
        cin >> x;
        cout << "Enter you angle: ";
        cin >> y;
        RectToPolar(x,y,xnow,ynow);
        cout << "The cartesian coordinate is " << xnow << " ," << ynow << endl;
        Pause();
    }
    //MenuOptions();
    option = MenuOptions();
    }
    
    return(0);
}
