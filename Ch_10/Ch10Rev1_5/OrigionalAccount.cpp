#include <iostream>
#include <vector>
#include <string>
using namespace std;
AccountClass::AccountClass(string AcctName, string AcctOpenDate)
:Name(AcctName), OpenDate(AcctOpenDate), Balance(0), TransDates(0),TransKinds(0),TransAmts(0)
{
}
void AccountClass::Deposit(double Amt, string Date)
{
    Balance += Amt;
    TransDates.resize(TransDates.size() +1);
    TransDates[TransDates.size()-1] = Date;
    TransKinds.resize(TransKinds.size() + 1);
    TransKinds[TransKinds.size()-1] = "Deposit";
    TransAmts.resize(TransAmts.size()+1);
    TransAmts[TransAmts.size()-1] = Amt;
}
bool AccountClass::Withdrawal(double Amt, string date)
{
    TransDates.resize(TransDates.size()+1);
    TransDates[TransDates.size()-1] = Date;
    TransKinds.resize(TransKinds.size()+1);
    TransAmts.resize(TransAmts.size()+1);
    TransAmts[TransAmts.size()-1] = Amt;
    if (Amt<= Balance){
        Balance -=Amt;
        TransKinds[TransKinds.size()-1] = "Withdrawal";
        return(true);
    }
    else{
        TransKinds[TransKinds.size()-1] = "Withdrawal/Failed";
        return(false);
    }
}
double AccountClass::GetBalance() const
   /*Determines current balacne
     post: current balacne returned*/
     {
         return(Balance);
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
