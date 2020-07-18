//Chapter 10 Review 1 & 2
//instatiaiting: attempt of creating an instance of a class
//not working
#include <iostream>
#include <vector>
#include<string>
#include"account.h"
using namespace std;
    class AccountClass{
        public:
        //constructor
        AccountClass(string AcctName, string AcctOpenDate){
            
        }
        //chapter 10 Reivew 2: write a constructor for account class
        class AccountClass::AccountClass()
            //I think i need to initialize the vectors here. yes:)
            : Name(AcctName), OpenDate(AcctOpenDate), Balance(0), TransDates(0), TransKinds(0), TrandAmts(0)
            {
            }
        void Deposit(double Amt, string Date){
        }
        bool Withdrawal(double Amt, string Date){
            return(true);
        }
        double GetBalance() const{
            return(0);
        }
        void WriteTransaction(ostream &OutFile) const{
        }
        private:
        string Name;                                                //fields
        string OpenDate;
        string Balance;
        vector<string>TransDates, TransKinds;
        vector<double> TransAmts;
    };
int main(){
    AccountClass Account("Theresa account", "January 1,1970");
    Account.Deposit(400,"January 1,1970") ;                      //instance function call. call deposit function on instance of class
    Account.Withdrawal(200, "July 12, 20909");
    Account.GetBalance();
    Account.WriteTransaction("The file");
    return(0);
}