#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Account{
    private: 
        int id;
        string name;
        int balance;

    public: 

    Account(int id, string name, int balance) {
        this->id = id;
        this->name = name;
        this->balance = balance;
    }

    auto getBalance() {
        return balance;
    }

    auto getName() {
        return name;
    }

    auto getId() {
        return id;
    }

    void credit(int amount) {
        if (amount < 0) {
            cout << "Provided amount is wrong" << endl;
            return ;
        }

        this->balance += amount;
    }

    void debit(int amount) {
        if (amount > balance || amount < 0) {
            cout << "Error" << endl;
            return;
        }

        this->balance -= amount;
    }

    ~Account() {
        cout << "Object Destroyed" << endl;
    }

};

int main(int argc, char** args) {
    auto person = make_unique<Account>(1, "Sharvil", 0);
    
    cout << "=== Smart Pointer Bank Account Demo ===" << endl;
    cout << "Account Holder: " << person->getName() << endl;
    cout << "Account ID: " << person->getId() << endl;
    cout << "Initial Balance: $" << person->getBalance() << endl;
    
    cout << "\n--- Depositing $5000 ---" << endl;
    person->credit(5000);
    cout << "New Balance: $" << person->getBalance() << endl;
    
    cout << "\n--- Withdrawing $2000 ---" << endl;
    person->debit(2000);
    cout << "New Balance: $" << person->getBalance() << endl;
    
    cout << "\n--- Trying to withdraw $5000 (more than balance) ---" << endl;
    person->debit(5000);
    cout << "Balance after failed withdrawal: $" << person->getBalance() << endl;
    
    cout << "\n--- Trying to deposit negative amount ---" << endl;
    person->credit(-500);
    cout << "Balance after failed deposit: $" << person->getBalance() << endl;
    
    cout << "\n=== End of Main ===" << endl;
    cout << "Notice: No manual delete needed!" << endl;
    cout << "unique_ptr will automatically call destructor when going out of scope" << endl;
    
    return 0;
}