// A simple program to demonstrate encapsulation
// Author: Craig Nginga
// Reg No: BSE-05-0209/2024
// Date: 10th February 2024

#include <iostream>
using namespace std;

class employee
private;
int salary;
string name;

public;
// Setter method
void setSalary(int sal) {
salary = sal;
}
void setName(string n) {
name = n;
}
// Getter method
int getSalary() {
return salary;
}
string getName() {
return name;
}
};

int main() {
employee emp;
emp.setSalary(50000);
emp.setName("Craig");

cout << "Employee name: " << emp.setName() << endl;
cout << "Employee salary: " << emp.setSalary() << endl;

return 0;
}