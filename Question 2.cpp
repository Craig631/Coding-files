#include <iostream>
#include <cmath> // For M_PI
using namespace std;

double calculateCylinderVolume(double radius, double height) {
    // Calculate the volume of the cylinder
    double volume = M_PI * pow(radius, 2) * height;
    return volume;
}

int main() {
    double radius, height;

    // Prompt the user for input
    cout << "Enter the radius of the cylinder: ";
    cin >> radius;

    cout << "Enter thr height of the cylinder: ";
    cin >> height;

    // Calculate and display the volume
    double volume = calculateCylinderVolume(radius, height);
    cout << "The volume of the cylinder is: " << volume << endl;

    return 0;
}