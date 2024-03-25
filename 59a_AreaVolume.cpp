#include <iostream>
using namespace std;

int main() {
    const double PI = 3.141;

    // Calculate the area of a circle
    double radius;
    cout << "Enter the radius of the circle: ";
    cin >> radius;
    double circleArea = PI * radius * radius;
    cout << "The area of the circle is: " << circleArea << endl;

    // Calculate the volume of a sphere
    double sphereRadius;
    cout << "Enter the radius of the sphere: ";
    cin >> sphereRadius;
    double sphereVolume = (4.0 / 3.0) * PI * sphereRadius * sphereRadius * sphereRadius;
    cout << "The volume of the sphere is: " << sphereVolume << endl;

    return 0;
}
