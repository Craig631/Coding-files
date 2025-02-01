#include <iostream>
#include <string>
using namespace std;

// Define the car class
class Car {
    public:
    //Public data members
    string brand;
    string model;
    float price;
    int milieage;

    // Function to display car details
    void display() {
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Price: $" << price << endl;
        cout << "Milieage: " << milieage << " miles" << endl;
    }

    // Function to drive the car and update milieage
    void drive(int distance) {
        milieage += distance;
        cout << "Car driven for " << distance << " miles" <<endl;
        cout << "Update milieage: " << milieage << " miles" <<endl;
    }
};

int main() {
    // Create a Car object with specific details
    Car myCar;
    myCar.brand = "Toyota";
    myCar.model = "Corolla";
    myCar.price = 20000;
    myCar.milieage = 5000;

    // Displya the car details
    myCar.display();

    // Simulate driving the car
    myCar.drive(150);
    myCar.drive(300);

    return 0;
}