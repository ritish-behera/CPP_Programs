#include <iostream>
using namespace std ;
int main ()
{
    float temperatureC, temperatureF ;
    cout << "Enter the temperature in Fahrenheit : " ;
    cin >> temperatureF ;
    temperatureC = (((temperatureF - 32) * 5 )/ 9);
    cout << "The temperature in Celsius is : " << temperatureC ;
    return 0 ;

}