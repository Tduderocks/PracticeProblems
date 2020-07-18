/*Implements a bank account class which maintains and can 
  display a list of all transactions on the account 
  it also maintains and can display a list of all transactions on the account*/
  #ifndef _ACCOUNTCLASS_
  #define _ACCOUNTCLASS _
  #include <iostream>
  #include <fstream>
  #include <iostream>
  #include <string>
  #include <vector>
  #include "dateclass.h"
  using namespace std;
  class AccountClass{
      public:
      //constructor
      AccountClass(string AcctName, DateClass AcctOpenDate);
      /*opens AcctName account on AcctOpen Date.
      post: acctName balacen is zero, and transaction recorded*/
      AccountClass(); //defalt constructor - empty
      bool Deposit(double Amt,DateClass Date);
      /*Adds deposit to Acct and records transaction
        post: amt added to account, and transaction recorded*/
      bool Withdrawal(double Amt, DateClass Date);
      /*Subtracts withdrawal from account and records transaction
        post: if amt<=Balance, amt deleted from accoutn, transaction recorded,
        and true returned. Otherwise, false returned, attempt recorded, and balance unchanged.*/
      double GetBalance() const;
      /*Determines current balance
        post: current balance returned*/
      void WriteTransaction(ostream &OutFile) const;
      /*Writes transactions to outfile
        post: all inforamtion about the account written to outfile, including list of all transactions in order by date*/
      void SpecifyAccount(string AcctName, DateClass AcctOpenDate);
       /*Assigns acctname and acctopen date to account if account not initialized
         post: acctname assigned to name and acct open date assigned to open date if account was not already initialized
         isopen is true*/
      string GetName() const;
      /*Determines accout name
        post: name returned*/
       DateClass GetOpenDate() const;
       /*post: account opend and returned*/
       //access functions that retruend transactin infromations
       int GetTransCount() const;
       /*Post:number of transactions returned*/
       DateClass GetTransDate(int TransNum) const;
       /*Post: date of transaction returned*/
       string GetTransKind(int TransNum) const;
       /*post : type of transaction treturned*/
       //stream functions
        void Store(ostream & OutFile) const;
        /*Pre: InFile is open
          post: account written in standard format to outfile*/
        void Retrieve(istream & InFile);
        /*Pre:InFile is open and positioned at a properly formatted account 
          post: next account has been read from InFile into account*/   
          double GetTransAmt(int TransNum) const;
          /*post: amount of transaction returned*/
       private:
            string Name;
            double Balance;
            vector<DateClass>TransDates;
            vector<string> TransKinds;
            vector<double>TransAmts;
            bool IsOpen;
            DateClass OpenDate;
        void AddTransaction(string Kind, DateClass Date, double Amt);
        /*Post: Transaction recorded at appropirate postition by date*/
  };
  #include "account.cpp"
  #endif