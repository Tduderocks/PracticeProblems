#include "account.h"
#include "dateclass.h"
#include <iostream>
#include <vector>
#include <conio.h>
int main(){
    vector<AccountClass> Bank(100);
    fstream BankData;
    int NumAccounts = 0;
    int AcctNum;
// Retrieve accounts from File
BankData.open("bankdata.dat", ios::in);
BankData >> NumAccounts; BankData.ignore(80,'\n');
for(AcctNum=0; AcctNum < NumAccounts; AcctNum++){
    Bank[AcctNum].Retrieve(BankData);
}
BankData.close();
//TestAccountClass
char Choice;
string Name;
DateClass Date;
double Amount;
while (true){
    cout << "AddAccount/Deposit/Withdrawal/disPlay/Quit: ";
    Choice = getchar();
    cout << endl;
    if((Choice =='Q') || (Choice =='q')){
        break;
    }
    switch(Choice){
        case 'A':
        case 'a': //Add an account
            cout << "Enter name:" ;
            getline(cin, Name);
            cout << "Enter Date: ";
            Date.Read(cin);
            cout << "Enter initial deposit: ";
            cin >> Amount; cin.ignore(80,'\n');
            Bank[NumAccounts].SpecifyAccount(Name,Date);
            Bank[NumAccounts].Deposit(Amount,Date);
            NumAccounts++;
            break;
        case 'D':
        case 'd': //deposit
            cout << "Enter account number: ";
            cin >> AcctNum;
            cout << "Enter amount";
            cin >> Amount; cin.ignore(80,'\n');
            cout << "Enter Date: ";
            Date.Read(cin);
            Bank[AcctNum].Deposit(Amount,Date);
            break;
        case 'W':
        case 'w': //withdrawal
            cout << "Enter account Number: ";
            cin >> AcctNum;
            cout << "Enter amount: ";
            cin >> Amount; cin.ignore(80,'\n');
            cout << "Enter date: ";
            Date.Read(cin);
            Bank[AcctNum].Withdrawal(Amount,Date);
            break;
        case 'P':
        case 'p': //display accounts
            for (AcctNum=0; AcctNum < NumAccounts; AcctNum ++){
                Bank[AcctNum].WriteTransaction(cout);
            }
            break;
}
}
//Save accounts in file
BankData.open("bankdata.dat", ios::out);
BankData << NumAccounts << endl;
for (AcctNum = 0; AcctNum < NumAccounts; AcctNum ++){
    Bank[AcctNum].Store(BankData);
}
BankData.close();
return(0);
}
/*ch 10 review 16: no, a transaction cannot be added directly because that is a private function of the class*/

//need to fix adding account

/*Chapter 10 review 17 add findAccount Function*/

/*Chapter  10 Review 18 check for an open account in .h and .cpp*/