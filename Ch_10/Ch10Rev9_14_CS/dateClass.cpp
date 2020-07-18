/*Implementation of a dateclass class that stores month, day and year
  two free functions are inldueed: operator<< and operator >>*/
//#include <iostream>
using namespace std;
DateClass::DateClass()
    : Month(0), Day(0), Year(0)                                          //initialize if needed
    {
    }
/*Default Constructor*/
DateClass::DateClass(int MonthArg, int DayArg, int YearArg)
    :Month(MonthArg),Day(DayArg),Year(YearArg)                        //Initiailaize if needed
/*constructor*/
{
}
void DateClass::SetDate(int MonthArg,int DayArg, int YearArg)
/*M,D,Y assigned to monty day year
 pre: m,d, and y are valid 
 post: monty = m, day=d, year = y*/
 {
         Month = MonthArg;
         Day = DayArg;
         Year = YearArg;
 }
 void DateClass::Write(ostream & OutFile) const
 /*Writes the date to OutFile
   post: date is written to outfile*/
   {
       OutFile.width(2); OutFile << Month << '/';
       OutFile.width(2); OutFile << Day << '/';
       OutFile.width(2); OutFile << Year;
   }
bool DateClass::Read(istream &InFile)
/*Reads a date from Infile. Input is assumed to be in mm/dd/yy form. true returned if not 0/0/0
 post: string read from infile and parsed into month, day, and year.
 true returned if date not 0/0/0. false returend otherwise.*/
 {
     string S, MonthStr, DayStr, YearStr;
     getline(InFile, S);
     MonthStr = S.substr(0,S.find('/'));
     S = S.substr(S.find('/') + 1,S.length()-S.find('/')-1);
     DayStr = S.substr(0,S.find('/'));
     YearStr=S.substr(S.find('/') + 1,S.length() -S.find('/')-1);
     Month = atoi(MonthStr.c_str());
     Day = atoi(DayStr.c_str());
     Year = atoi(YearStr.c_str());
     return((Month!=0 && (Day!=0) && (Year!=0)));
 }
 bool DateClass::operator <(const DateClass Date2) const
 {
     if (Year <Date2.Year)
        return(true);
     else if(Year>Date2.Year)
        return(false);
     else if(Month<Date2.Month)
        return(true);
     else if(Month>Date2.Month)
        return(false);
     else
        return(Day < Date2.Day);
 }
 bool DateClass ::operator >(const DateClass Date2) const{
     return(!(operator==(Date2))&& !(operator<(Date2)));
 }
 bool DateClass::operator == (const DateClass Date2) const
 /*Determiens if date is equal to date 2
 post: treu retruend if date=date2, false returned otherwise*/
 {
     return((Day == Date2.Day) && (Month ==Date2.Month) && (Year==Date2.Year));
 }
 bool DateClass::operator != (const DateClass Date2) const{
     return !(operator == (Date2));
 }
 bool DateClass:: operator >= (const DateClass Date2) const{
     return((operator ==(Date2))||(operator>(Date2)));
 }
 bool DateClass:: operator <= (const DateClass Date2) const{
     return((operator==(Date2))||(operator<(Date2)));
 }
 ostream& operator << (ostream & OutFile, const DateClass &D)
 {
     D.Write(OutFile);
     return(OutFile);
 }
 istream & operator >> (istream &InFile, DateClass &D)
 /*Reads from InFile to D
   Post: D is read from InFile*/
{
    D.Read(InFile);
    return(InFile);
}
//long DateClass:: operator - (const DateClass &Date2) const;// need to make
/*Subtracts two dates and gives the days between them*/
//{ 
   // return(operator -(Date2));
//}
 
 