/*AccountClass implementation*/

#include <iostream>
#include <string>
#include <vector>
using namespace std;
AccountClass::AccountClass(string AcctName, DateClass AcctOpenDate)
    :Name(AcctName),OpenDate(AcctOpenDate), Balance(0),
    TransDates(0), TransKinds(0), TransAmts(0), IsOpen(true)
    /*Opens acctName account on AcctOpenDate
      post: acctName balance is zero, and transaction recorded*/
      {
      }
AccountClass::AccountClass()
    :Balance(0), TransDates(0), TransKinds(0), TransAmts(0), IsOpen(false)
    /*Default constructior*/
    {
    }
void AccountClass::SpecifyAccount(string AcctName, DateClass AcctOpenDate)
/*Assigns acctname and acctopendate to account if account not initialized
 post: acctname assigned to name and acctopendate assigned to
 opendate if account was not already initaized. isopen is true*/
 {
     if(!IsOpen){
         Name = AcctName;
         OpenDate=AcctOpenDate;
         IsOpen = true;
     }
 }
 string AccountClass::GetName() const
 /*Determine accout name
   post: name returned*/
   {
   return(Name);
   }
bool AccountClass::Deposit(double Amt, DateClass Date)
/*Adds deposit to acct and records transaction.
 post: amt added to accoutn and transaction recorded*/
 {
     if(IsOpen){
         Balance += Amt;
         AddTransaction("Deposit", Date, Amt);
         return(true);
     }
     else{
         return(false);
     }
     }
 bool AccountClass::Withdrawal(double Amt, DateClass Date)
 /*subtracts withdrawal from accout and records transactions 
   post: if amt<=balance, amt deleted from account, transaction recorded, and true returned
   otherwise, false returned, attempt recorded and balance unchanged*/
   {
       if(Amt <=Balance){
           Balance -= Amt;
           AddTransaction("Withdrawal", Date, Amt);
           return(true);
       }
       else{
           AddTransaction("Wirthdawal/Failed", Date, Amt);
           return(false);
       }
   }
   //access functions
   double AccountClass::GetBalance() const
   /*Determines current balacne
     post: current balacne returned*/
     {
         return(Balance);
     }
    DateClass AccountClass::GetOpenDate() const
    {
        return(OpenDate);
    }
    int AccountClass::GetTransCount() const // returns number of trans
    {
        return(TransDates.size());
    }
    DateClass AccountClass::GetTransDate(int TransNum) const
    {
        return(TransDates[TransNum]);
    }
    string AccountClass::GetTransKind(int TransNum) const
    {
        return(TransKinds[TransNum]);
    }
    double AccountClass::GetTransAmt(int TransNum) const
    {
        return(TransAmts[TransNum]);
    }
     void AccountClass::WriteTransaction(ostream & OutFile) const
     /*Writes transactions to outfile
      post: all info about the account written to outfile, including a list of all transactions*/
      {
          OutFile.setf(ios::fixed);
          OutFile.precision(2);
          OutFile << Name << endl;
          OutFile << " Acct opened on: " << OpenDate << "Balance: " << Balance << endl;
          OutFile << "Transactions" << endl;
          for (int i = 0; i<TransDates.size(); i++){
              OutFile.width(12); OutFile << TransDates[i];
              OutFile.width(22); OutFile << TransKinds[i];
              OutFile.width(12); OutFile << TransAmts[i] << endl;
          }
      }
      void AccountClass::AddTransaction(string Kind, DateClass Date, double Amt)
      /*Records transaction in appropriate postition of arrays by date
        post: transaction recoreded in appropriate postiion by date*/
      {
          int NewSize = TransDates.size() + 1;
          TransDates.resize(NewSize);
          TransKinds.resize(NewSize);
          TransAmts.resize(NewSize);
          int NewSpot = NewSize -2;
          while ((NewSpot>= 0)&&(TransDates[NewSpot]>Date)){
              TransDates[NewSpot + 1] = TransDates[NewSpot];
              TransKinds[NewSpot +1] = TransKinds[NewSpot];
              TransAmts[NewSpot + 1] = TransAmts[NewSpot];
              NewSpot--;
          }
          TransDates[NewSpot+1] = Date;
          TransKinds[NewSpot +1] = Kind;
          TransAmts[NewSpot + 1] = Amt;
      }
      void AccountClass::Store(ostream & OutFile) const
      /*Pre: inFile is open
        Post: Account written in standard format to OutFile*/
        {
            OutFile << Name << endl;
            OutFile << OpenDate << endl;
            OutFile << Balance << endl;
            OutFile << TransDates.size() << endl;
            for (int TransNum = 0; TransNum < TransDates.size(); TransNum ++){
                OutFile << TransDates[TransNum] << endl;
                OutFile << TransKinds[TransNum] << endl;
                OutFile << TransAmts[TransNum] << endl;
            }
        }
        void AccountClass::Retrieve(istream &InFile)
        /*Pre:InFile is open and postitioned at a properly formatted account
          post: next account has been read from InFile into account*/
          {
              getline(InFile,Name);
              OpenDate.Read(InFile);
              InFile >> Balance; InFile.ignore(80,'\n');
              int TransCount;
              InFile >> TransCount; InFile.ignore(80,'\n');
              TransDates.resize(TransCount);
              TransKinds.resize(TransCount);
              TransAmts.resize(TransCount);
              for(int TransNum = 0; TransNum < TransCount; TransNum ++)
              {
                  InFile >> TransDates[TransNum];
                  getline(InFile, TransKinds[TransNum]);
                  InFile >> TransAmts[TransNum]; InFile.ignore(80,'\n');
              }
              IsOpen = true;
          }