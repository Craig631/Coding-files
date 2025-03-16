// A simple program showing a banking system
/*
Author:Craig Nginga
Reg No:BSE-05-0209/2024
Group:3
Date:12/03/2025
*/

#include <iostream>
using namespace std;

struct Customer {
    string name;
    double accountBalance;
    string lastTransaction;
};

// Function to display customer details
void displayCustomer(const Customer& c) {
    cout << "\nCustomer Details:\n";
    cout << "Name: " << c.name << endl;
    cout << "Account Balance: $" << c.accountBalance << endl;
    cout << "Last Transaction: " << c.lastTransaction << endl;
}

int main() {
    // Create two Customer records and get user input
    Customer c1, c2;

    cout << "Enter details for Customer 1:\n";
    cout << "Name: ";
    getline(cin, c1.name);
    cout << "Account Balance: ";
    cin >> c1.accountBalance;
    cin.ignore(); // Ignore newline character after balance input
    cout << "Last Transaction: ";
    getline(cin, c1.lastTransaction);

    cout << "\nEnter details for Customer 2:\n";
    cout << "Name: ";
    getline(cin, c2.name);
    cout << "Account Balance: ";
    cin >> c2.accountBalance;
    cin.ignore();
    cout << "Last Transaction: ";
    getline(cin, c2.lastTransaction);

    // Display customer details
    displayCustomer(c1);
    displayCustomer(c2);

    return 0;
}
