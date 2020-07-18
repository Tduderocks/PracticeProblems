/*Implements a bank account and maintains and dsiplays transactions in the account*/
#include<iostream>
#include<string>
#include<vector>
class AccountClass{
    public:
    AccountClass(string AcctName, string AcctOpenDate);
    //opens
    void Deposit(double Amt, string Date);
    //deopists
    bool Withdrawal(double Amt, string Date);
    //withdrawal
    double GetBalance() const;
    //determines balance
    void WriteTransaction(ostream & OutFile) const;
    private:
    string Name;
    string OpenDate;
    double Balance;
    vector <string> TransDates, TransKinds;
    vector<double> TransAmts;
};
#include "OrigionalAccount.cpp"
