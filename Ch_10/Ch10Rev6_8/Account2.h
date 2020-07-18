/*Implements a bank account class which maintains and can 
  display a list of all transactions on the account */
  //I dont think I need this anymore
  #include <iostream>
  #include <string>
  #include <vector>
  using namespace std;
  class AccountClass{
      public:
      /*Default construction*/
      AccountClass();
     // vector<AccountClass>Bank(100); do i put this?
      //constructor
      AccountClass(string AcctName, string AcctOpenDate);
      /*opens AcctName account on AcctOpen Date.
      post: acctName balacen is zero, and transaction recorded*/
      void Deposit(double Amt,string Date);
      /*Adds deposit to Acct and records transaction
        post: amt added to account, and transaction recorded*/
      bool Withdrawal(double Amt, string Date);
      /*Subtracts withdrawal from account and records transaction
        post: if amt<=Balance, amt deleted from accoutn, transaction recorded,
        and true returned. Otherwise, false returned, attempt recorded, and balance unchanged.*/
      double GetBalance() const;
      /*Determines current balance
        post: current balance returned*/
      void WriteTransaction(ostream &OutFile) const;
      /*Writes transactions to outfile
        post: all inforamtion about the account written to outfile, including list of all transactions*/
       void SpecifyAccount(string AcctName, string AcctOpenDate);
       /*Assigns acctname and acctopendate to account if account not initialized
         post: acctname assigned to name and acctopendate assigned to 
         opendate if account was not already initailaized. IsOpen is true*/
         string GetName() const;
         /*Determines account name
           post: name returned*/
        private:
            string Name;
            string OpenDate;
            double Balance;
            vector<string>TransDates, TransKinds;
            vector<double>TransAmts;
            bool IsOpen;
  };
  #include "account.cpp"