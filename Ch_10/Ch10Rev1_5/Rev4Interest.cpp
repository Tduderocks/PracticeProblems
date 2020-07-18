/*Chapter 10 Review 4 works done:)
Gives interest to an account*/
//uses old account.h so doesn't work anymore
#include <iostream>
#include "account.h"
using namespace std;
void GiveInterest(AccountClass &AccountName, double rate)
/*Adds interest to an accountClass object using the deposit function
  post: interest is added to the account balance*/
  {
      double BalanceAmount = AccountName.GetBalance();
      double depositAmount = BalanceAmount*rate;
      AccountName.Deposit(depositAmount,"5/20/99");
  }
  int main()
  //call giveinterest on an account
  {
      AccountClass AccountName("Theresa's account", "5/12/98");
      AccountName.Deposit(100,"5/19/98");
      double rate=0.02;
      GiveInterest(AccountName,rate);
      AccountName.WriteTransaction(cout);
      return(0);
  }