/*Chapter 10 section 10.5 client program - works good
Review 7: add AddAccount() function - not working
Review 8: add AddInterest() function - not working */
#include <iostream>
#include "account.h"
#include<string>
#include <vector>
using namespace std;
void AddAccount(vector<AccountClass> &Bank, int &NumAccounts,string NameOfAcct, string DateOfAccount)
/*Adds name of acct account to bank
 pre: numAccounts < Bank.length()
 post: numeOfAccount added to bank array and NumAccounts Incremented*/
 {

 }
 void GiveInterest(AccountClass &AccountName, double rate)
/*Adds interest to an accountClass object using the deposit function
  post: interest is added to the account balance*/
  {
      double BalanceAmount = AccountName.GetBalance();
      double depositAmount = BalanceAmount*rate;
      AccountName.Deposit(depositAmount,"5/20/99");
  }  
 void AddInterest(double InterestRate, vector<AccountClass> &Bank, int NumAccounts)
 /*uses giveInteres() to add interest to all accounts numbered 0 to NumAccount-1 in the bank array
   post: Interest added to accounts from 0 to numaccount-1*/
   {
      // string Name,Date;
      // double rate = 0.02;
      // for(int i=0; i<=NumAccounts; i++)
       //Give interest to all accounts
      // {
      //     GiveInterest(Bank[i].SpecifyAccount(Name,Date), rate);
       //}
   }
int main()
{
    vector<AccountClass>Bank(100);
    int NumAccounts = 0;
    int i;
    double rate=0.02;
    const int NumToTest=3;
    string Name,Date;
    double InitialDeposit;
    //Enter Account Data
    for (i=0; i<NumToTest; i++){
        cout << "Enter name # " << (i+1) << ":";
        getline(cin,Name);
        //GiveInterest(Name,rate);
        cout << "Enter date # " <<(i+1) << ":";
        getline(cin, Date);
        cout << "Enter initial deposit for #" << (i+1) << ":";
        cin >> InitialDeposit;
        cin.ignore(80,'\n');
        Bank[i].SpecifyAccount(Name,Date);
        Bank[i].Deposit(InitialDeposit,Date);
        NumAccounts++;
    }
    //display list of accounts
    for (i=0;i<NumAccounts; i++){
        cout.width(25);
        cout.setf(ios::left);
        cout<< Bank[i].GetName() << Bank[i].GetBalance() << endl;
    }
    return(0);
}