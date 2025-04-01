#include <iostream>
#include <string>

using namespace std;

class BankAccount {
    public:
    string account_holder;
    double balance;

    BankAccount() {
        account_holder = "???";
        balance = 0;
    }

    BankAccount(string _account_holder, double _balance) {
        account_holder = _account_holder;
        balance = _balance;
    }

    void Deposit(int money){
        balance += money;
    }
    
    void Withdraw(int money){
        balance -= money;
    }

    void PrintBalance() {
        cout << account_holder << ": " <<balance << "원";
    }
};

int main() {
    BankAccount bank1("윤원주", 10000);
    BankAccount bank2;

    bank1.PrintBalance();
    cout << endl;
    bank2.PrintBalance();

    return 0;
}

