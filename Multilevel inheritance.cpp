// A program to demonstarte inheritance in creating a simple bank management system in C++
/*
Author : Craig 
Reg No : BSE-05-0209/2024
Date   : 26th February, 2025
*/

#include <iostream>
using namespace std;

// Base class
class AccountHolder {
    protected:
        string name;
        
    public:
    // Setter and getter methods
        void setName(string n) {
            name = n;
        }
        
        string getName() {
            return name;
        }
};

// Derived class from AccountHolder
class BankAccount : public AccountHolder
private:
        int accountNumber;
        double balance;

public :
// Constructor to initialize name, account number and balance
 BankAccount(string n, int accNum, double bal) {
    name = n;
    accountNumber = accnum;
    balance = bal;
 }

 // Function to get account number
    int getAccountNumber() {
        return accountNumber;
 }

 // Function to get balance
    double getBalance() {
        return balance;
    }
};

// Derived class from BankAccount
class SavingsAccout = public BankAccount {
    private:
        double interestRate;
        
    public:
    // Constructor to initialize all attributes
        SavingsAccount(string n, double bal, double Rate) : BankAccount(n, accNum, bal) {
            interestRate = intRate;
        }
        
    // Function to get interest rate
        double getInterestrate() {
            return interestRate;
        }
};
    
// Main function
int main() {
 // Create a BankAccount object
 BankAccount bankAcc ("Craig", 123456, 5000);
cout << "Bank Account Details:/n";
cout << "Name: " << bankAcc.getName() << endl;
cout << "Account Number: " << bankAcc.getAccountNumber() << endl;
cout << "Balance: " << bankAcc.getBalance() << endl;
    
// Create a SavingsAccount object
SavingsAccount savingsAcc ("Craig", 5000, 0.05);
cout << "Savings Account Details:/n";
cout << "Name: " << savingsAcc.getName() << endl;
cout << "Account Number: " << savingsAcc.getAccountNumber() << endl;
cout << "Balance: " << savingsAcc.getBalance() << endl;
cout << "Interest Rate: " << savingsAcc.getInterestRate() << %/n;

retuen 0;
}
  
