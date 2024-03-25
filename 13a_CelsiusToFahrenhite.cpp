#include <iostream>
using namespace std ;
int main ()
{
    float temperatureC, temperatureF ;
    cout << "Enter the temperature in celsius : " ;
    cin >> temperatureC ;
    temperatureF = ((temperatureC *9)/5) + 32 ;
    cout << "The temperature in Fahrenhite is : " << temperatureF ;
    return 0 ;

}