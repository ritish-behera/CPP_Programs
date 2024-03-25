#include <iostream>
using namespace std ;
int main ()
{
    //Celsius To Fahrenheit Temperature
    float temperatureC, temperatureF ;
    cout << "Enter the temperature in celsius : " ;
    cin >> temperatureC ;
    temperatureF = ((temperatureC *9)/5) + 32 ;
    cout << "The temperature in Fahrenhite is : " << temperatureF << endl;

    //Pounds to Kilogram Weight
    float weightLb, weightKg ;
    cout << "Enter the weight in pounds : " ;
    cin >> weightLb ;
    weightKg = 0.45359237 * weightLb ;
    cout << "The weight in Kilograms is : " << weightKg << endl;

    //Feet to Centimeter Height
    float heightF, heightC ;
    cout << "Enter the height in Feet : " ;
    cin >> heightF ;
    heightC = 30.48 * heightF ;
    cout << "The height in Centimeter is : " << heightC << endl;

    //Meter2 to Centimeter2 Area
    float areaM, areaC ;
    cout << "Enter the area in meter2 : " ;
    cin >> areaM ;
    areaC = 10000 * areaM ;
    cout << "The area in centimeter2 is : " << areaC << endl ;

    return 0 ;
}