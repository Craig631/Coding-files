//A simple program to show patient details
/* 
Author:Craig Nginga
Reg No:BSE-05-0209/2024
Date:12-03-2024
Group 3
*/

#include <iostream>
using namespace std;

// Define the Patient structure
struct Patient {
    string name;
    int age;
    string diagnosis;
};

// Function to display patient details
void displayPatient(const Patient& p) {
    cout << "\nPatient Details:\n";
    cout << "Name: " << p.name << endl;
    cout << "Age: " << p.age << endl;
    cout << "Diagnosis: " << p.diagnosis << endl;
}

int main() {
    // Create two Patient records and get user input
    Patient p1, p2;

    cout << "Enter details for Patient 1:\n";
    cout << "Name: ";
    getline(cin, p1.name);
    cout << "Age: ";
    cin >> p1.age;
    cin.ignore(); // Ignore newline character after age input
    cout << "Diagnosis: ";
    getline(cin, p1.diagnosis);

    cout << "\nEnter details for Patient 2:\n";
    cout << "Name: ";
    getline(cin, p2.name);
    cout << "Age: ";
    cin >> p2.age;
    cin.ignore();
    cout << "Diagnosis: ";
    getline(cin, p2.diagnosis);

    // Display patient details
    displayPatient(p1);
    displayPatient(p2);

    return 0;
}
