// A simple program to show inheritance in a Library management system
/*
Author : Craig Nginga
Reg No. : BSE-05-0209/2024
Course : Software engineering
Date :  26/02/2025
*/

#include <iostream>
using namespace std;

// Base class Person
class Person {
protected:
    string name; // Protected data member to store the person's name

public:
    // Function to set the person's name
    void setName(string n) {
        name = n;
    }

    // Function to get the person's name
    string getName() {
        return name;
    }
};

// Derived class LibraryMember inheriting from Person
class LibraryMember : public Person {
private:
    int memberID;      // Private data member to store member ID
    int booksBorrowed; // Private data member to store number of borrowed books

public:
    // Constructor to initialize name, memberID, and booksBorrowed
    LibraryMember(string n, int id, int books) {
        name = n; // Inherited from Person
        memberID = id;
        booksBorrowed = books;
    }

    // Function to get member ID
    int getMemberID() {
        return memberID;
    }

    // Function to get number of borrowed books
    int getBooksBorrowed() {
        return booksBorrowed;
    }
};

// Derived class PremiumMember inheriting from LibraryMember
class PremiumMember : public LibraryMember {
private:
    double membershipFee; // Private data member to store membership fee

public:
    // Constructor to initialize name, memberID, booksBorrowed, and membershipFee
    PremiumMember(string n, int id, int books, double fee) : LibraryMember(n, id, books) {
        membershipFee = fee;
    }

    // Function to get membership fee
    double getMembershipFee() {
        return membershipFee;
    }
};

int main() {
    // Creating an object of LibraryMember
    LibraryMember member("Craig Nginga", 101, 5);
    cout << "Library Member Details:" << endl;
    cout << "Name: " << member.getName() << endl;
    cout << "Member ID: " << member.getMemberID() << endl;
    cout << "Books Borrowed: " << member.getBooksBorrowed() << endl;

    // Creating an object of PremiumMember
    PremiumMember premiumMember("Abigail", 102, 8, 99.99);
    cout << "\nPremium Member Details:" << endl;
    cout << "Name: " << premiumMember.getName() << endl;
    cout << "Member ID: " << premiumMember.getMemberID() << endl;
    cout << "Books Borrowed: " << premiumMember.getBooksBorrowed() << endl;
    cout << "Membership Fee: $" << premiumMember.getMembershipFee() << endl;

    return 0;
}
