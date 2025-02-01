#include <iostream>
#include <cmath>
using namespace std;
//define pi 3.14159;
 
class Cylinder{
    public:
    double height;
    double radius;
    double pi = 3.14159;
    
    double calculateVolume() {
        return pi*radius*radius*height;
    }
    
    double calculateArea() {
        return 2*pi*radius*radius + 2*pi*radius*height;
    }
};

int main() {
    Cylinder c1,c2;
    c1.height = 10;
    c1.radius = 5;
    //c1.pi = 3.14159
    
    double vol, area;
    vol = c1.calculateVolume();
    area = c1.calculateArea();
    
    cout << "Volume: " << vol << endl;
    cout << "Area: " << area << endl;
    
    return 0;
}
