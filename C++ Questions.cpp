#include <iostream>
#include <string>
using namespace std;

int main() {
    //Inputs
    string bookID;
    int dueDate, returnDate;

    //Prompt for user inputs
    cout << "Enter the book ID: ";
    cin >> bookID;

    cout << "Enter the due date: ";
    cin >> dueDate;

    cout << "Enter the return date: ";
    cin >> returnDate;

    //Calculate the number of overdue days
    int overdueDays = returnDate - dueDate;

    //Initialize fine rate and fine amount
    int fineRate = 0;
    int fineAmount = 0;

    //Determine the fine rate based on days overdue
    if (overdueDays <= 7) {
        fineRate = 20; // Ksh 20 per day
    } else if (overdueDays <= 14) {
        fineRate = 50; // Ksh 50 per day
    } else {
        fineRate = 100; // Ksh 100 per day
    }
    fineAmount = fineRate * overdueDays;

    return 0;
}

