#include <iostream>
#include <cmath>
using namespace std ;
int main()
{
    //Area of Circle
    float radius, areaC  ;
    cout << "Enter the radius of the circle :" ;
    cin >> radius ;
    areaC = M_PI * pow(radius,2);
    cout << "Area of the circle is : " << areaC << endl;

    //Area of Triangle
    float heightT, base, areaT ;
    cout << "Enter the height of the triangle : " ;
    cin >> heightT ;
    cout << "Enter the base of the triangle : " ;
    cin >> base ;
    areaT = 0.5 * heightT * base ;
    cout << "Area of the triangle is : " << areaT << endl ;

    //Area of Square
    float LengthOfSide, areaS ;
    cout << "Enter the side length of square : " ;
    cin >> LengthOfSide ;
    areaS = pow(LengthOfSide,2) ;
    cout <<" Area of the square is " << areaS << endl ;

    //Area Of Rectangle 
    float heightR, width, areaR ;
    cout << "Enter the height of rectangle : " ;
    cin >> heightR ;
    cout << "Enter the width of the rectangle : " ;
    cin >> width ;
    areaR = heightR * width ;
    cout << "Area of the rectangle is : " << areaR << endl ;

    // Volume of Sphere
    float radiusS, volume ;
    cout << "Enter the radius of the sphere : " ;
    cin >> radiusS ;
    volume = (4/3) * M_PI * pow(radiusS,3) ;
    cout << " Volume of the Spere is : " << volume << endl ;

    return 0 ;

}