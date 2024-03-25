#include <iostream>
using namespace std;
const double PI = 3.141;

double calculateCircleArea(double radius) {
    return PI * radius * radius;
}

double calculateSphereVolume(double radius) {
    return (4.0 / 3.0) * PI * radius * radius * radius;
}

int main() {
    // Calculate the area of a circle
    double radius;
    cout << "Enter the radius of the circle: ";
    cin >> radius;
    double circleArea = calculateCircleArea(radius);
    cout << "The area of the circle is: " << circleArea << endl;

    // Calculate the volume of a sphere
    double sphereRadius;
    cout << "Enter the radius of the sphere: ";
    cin >> sphereRadius;
    double sphereVolume = calculateSphereVolume(sphereRadius);
    cout << "The volume of the sphere is: " << sphereVolume << endl;

    return 0;
}
