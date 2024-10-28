#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    int accountNumber;
    double balance;

public:
    BankAccount(int accNumber, double initialBalance) {
        accountNumber = accNumber;
        balance = initialBalance;
    }

    void deposit(double amount) {
        balance += amount;
    }

    virtual void withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
        } else {
            cout << "Insufficient funds" << endl;
        }
    }

    double getBalance() {
        return balance;
    }
};

class SavingsAccount : public BankAccount {
private:
    double interestRate;

public:
    SavingsAccount(int accNum, double initialBalance, double rate) : BankAccount(accNum, initialBalance) {
        interestRate = rate;
    }

    void addInterest() {
        double interest = getBalance() * interestRate;
        deposit(interest);
    }
};

class CheckingAccount : public BankAccount {
public:
    CheckingAccount(int accNum, double initialBalance) : BankAccount(accNum, initialBalance) {}

    void withdraw(double amount) override {
        if (amount <= getBalance() + 100.0) {
            BankAccount::withdraw(amount);
        } else {
            cout << "Overdraft limit reached" << endl;
        }
    }
};

int main() {
    char userChoose;
    double amount;

    SavingsAccount mySavings(12345, 1000.0, 0.05);
    CheckingAccount myChecking(67890, 500.0);

    do {
        cout << "1. Deposit\n";
        cout << "2. Withdraw\n";
        cout << "3. Check Savings Balance\n";
        cout << "4. Exit\n";
        cout << "Choose an option: ";
        cin >> userChoose;

        if (userChoose == '1') {
            cout << "Enter amount to deposit: ";
            cin >> amount;
            mySavings.deposit(amount);
            cout << "Savings Balance: " << mySavings.getBalance() << endl;
        } else if (userChoose == '2') {
            cout << "Enter amount to withdraw: ";
            cin >> amount;
            mySavings.withdraw(amount);
            cout << "Savings Balance: " << mySavings.getBalance() << endl;
        } else if (userChoose == '3') {
            mySavings.addInterest();
            cout << "Savings Balance: " << mySavings.getBalance() << endl;
        }
    } while (userChoose != '4');

    return 0;
}
