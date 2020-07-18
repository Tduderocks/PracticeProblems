/*Implements a dateclass class that stores month, day and year
  two free functions are included: operator << and operator >> */
#ifndef _DATECLASS_
#define _DATECLASS_
#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;
class DateClass{
    public:
    DateClass();
    /*Default Constructor - no parameters*/
    DateClass(int MonthArg, int DayArg, int YearArg);
    /*constructor - parameters*/
    void SetDate(int MonthArg,int DayArg, int YearArg);
    /*M,D,Y assigned to monty day year
     pre: m,d, and y are valid 
     post: monty = m, day=d, year = y*/
   void Write(ostream & OutFile) const;
    /*Writes the date to OutFile
     post: date is written to outfile*/
    bool Read(istream &InFile);
    /*Reads a date from Infile. Input is assumed to be in mm/dd/yy form. if read fails, return false
    post: date frea from infile true returend for successful read, false returned otherwise*/
    bool operator == (const DateClass Date2) const;
    bool operator !=(const DateClass Dat2) const;
    bool operator < (const DateClass Date2) const;
    bool operator >(const DateClass Date2) const;
    bool operator >= (const DateClass Date2) const;
    bool operator <= (const DateClass Date2) const;
    long operator - (const DateClass Date2) const; //added to overload subtraction
    private:
    int Month;
    int Day;
    int Year;
};
#include "dateClass.cpp"
#endif