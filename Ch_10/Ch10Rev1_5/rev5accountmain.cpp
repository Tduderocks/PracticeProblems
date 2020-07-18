/*Client Program
AccountClass class demonstration program
chapter 10 review 5: display an appropriate message on withdraal
doesnt work - nothing is changing from origional*/
//needs old account.h
      #include "OrigionalAccount.h"
      #include <iostream>
      #include<vector>
      #include <string>
      int main()
      {
          AccountClass Storer("Ms. Tomacina Storer", "1/2/98 ");
          Storer.Deposit(100,"1/2/98");
          if(Storer.Withdrawal(10, "1.7.98")){
              cout << "Thank you, have a nice day!/n";
          }
          else{
              cout << "Invalid amount. you are now in overdraft/n";
          }
          if(Storer.Withdrawal(15, "1/9/98")){
              cout << "Thank you, have a nice day!/n";
          }
          else{
              cout <<"Invalid amoutn. you are not in overdraft/n";
          }
          if(Storer.Withdrawal(95, "1/19/98")){
              cout << "Thank you, have a nice day!/n";
          }
          else{
              cout << "Invalid amount. You are not in overdraft/n";
          }
          Storer.WriteTransaction(cout);
          return(0);
      }
      