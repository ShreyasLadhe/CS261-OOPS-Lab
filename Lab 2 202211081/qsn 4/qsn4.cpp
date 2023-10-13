#include <iostream>

using namespace std;

class BankAccount
{
private:
    int accountNumber;
    int balance;

public:
    BankAccount(int accNumber, int initialBalance)
        : accountNumber(accNumber), balance(initialBalance)
    {
        cout << "Account #" << accountNumber << " opened with initial balance $" << balance << endl;
    }

    ~BankAccount()
    {
        cout << "Account #" << accountNumber << " is being closed. Final balance: $" << balance << endl;
    }

    void deposit(int amount)
    {
        if (amount > 0)
        {
            balance += amount;
            cout << "Deposited $" << amount << " into Account #" << accountNumber << endl;
        }
        else
        {
            cout << "Invalid deposit amount for Account #" << accountNumber << endl;
        }
    }

    void withdraw(int amount)
    {
        if (amount > 0 && balance >= amount)
        {
            balance -= amount;
            cout << "Withdrawn $" << amount << " from Account #" << accountNumber << endl;
        }
        else
        {
            cout << "Invalid withdrawal or insufficient balance for Account #" << accountNumber << endl;
        }
    }

    int getBalance() const
    {
        return balance;
    }
};

int main()
{
    const int numAccounts = 3;
    BankAccount accounts[numAccounts] = {
        BankAccount(69, 548.0),
        BankAccount(420, 1792.0),
        BankAccount(98, 32651.0)};

    accounts[0].deposit(586.0);
    accounts[1].withdraw(4568.0);
    accounts[2].deposit(152.0);

    for (int i = 0; i < numAccounts; ++i)
    {
        cout << "Closing Account #" << accounts[i].getBalance() << endl;
    }

    return 0;
}
