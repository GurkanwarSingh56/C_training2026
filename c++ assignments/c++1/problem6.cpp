/*Write a C++ program to demonstrate ATM money withdrawal process by taking following private data
members:
Accountno, balance;
The withdrawal function should return remaining balance to the user and should deduct withdrawal amount
from balance. If withdrawal amount > balance print appropriate message on screen (Not enough balance)
The Deposit function should return updated balance to user.*/
#include <iostream>
using namespace std;

class ATM
{
private:
    int accountNo;
    int balance;

public:
    void getData()
    {
        cout << "Enter Account Number: ";
        cin >> accountNo;

        cout << "Enter Balance: ";
        cin >> balance;
    }

    void withdraw()
    {
        int withdrawAmount;

        cout << "Enter amount to withdraw: ";
        cin >> withdrawAmount;

        if (withdrawAmount <= balance)
        {
            balance -= withdrawAmount;
            cout << "Withdrawal Successful!" << endl;
            cout << "Remaining Balance = " << balance << endl;
        }
        else
        {
            cout << "Not enough balance." << endl;
        }
    }

    void deposit()
    {
        int depositAmount;

        cout << "Enter amount to deposit: ";
        cin >> depositAmount;

        balance += depositAmount;

        cout << "Deposit Successful!" << endl;
        cout << "Updated Balance = " << balance << endl;
    }
};

int main()
{
    ATM A1;

    A1.getData();

    A1.withdraw();

    A1.deposit();

    return 0;
}