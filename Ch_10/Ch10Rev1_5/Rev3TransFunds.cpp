/*Chapter 10 Review 3
works:) done:)
uses old accout.h so doesn't work anymore
  */
 #include <iostream>
 #include "OrigionalAccount.h"
 #include <string>
 using namespace std;
 bool TransFunds(AccountClass &Source, AccountClass &Dest, double Amount)
 /*Transfers funds from source account to destination account.
   post: If source>= Amount, true returned, Amount Subtracted from Source Account
   and amount added t odestination accout. if souce < amount, false returned, source & Dest. unchanged*/
   {
      if(Source.Withdrawal(Amount, "9/29/30")){
          Dest.Deposit(Amount, "10/3/30");
          return(true);
      }
      else{
          return(false);
      } 
   }
 int main()
 //calls transfunds to transfer money 
 {
     double Amount;
     AccountClass Source("Stephen's Account","7/14/19");
     Source.Deposit(1000, "9/10/19");
     double StephenMoney = Source.GetBalance();
     AccountClass Destination("Theresa's Account", "8-1/10/20");
     Destination.Deposit(500, "9/15/19");
     double TheresaMoney = Destination.GetBalance();
     TransFunds(Source, Destination, 100);
     Source.WriteTransaction(cout);
     Destination.WriteTransaction(cout);
 }