#include <iostream>
#include <string>

using namespace std;

int main() {
        string name;
        int age;

        cout << "Enter your name: ";
        cin >> name;

        cout << "Enter your age: ";
        cin >> age;

        if (age >= 18) {
                cout << name << "Eligible to vote." << endl;
        } else {
                cout << age << "Not eligible to vote." << endl;
        }

        return 0;
}