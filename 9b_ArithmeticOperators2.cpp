#include <iostream>
#include <cmath>
using namespace std ;
int main ()
{
    cout << sqrt(16.0) << endl ;
    cout << sqrt(16) << endl ;


    cout << pow(2.0,3.0) << endl ;
    cout << pow(2,3) << endl ;
    cout << pow(2.0,3) << endl ;
    cout << pow(1.1,2) << endl ;


    cout << abs(3) << endl ;
    cout << abs(-3) << endl ;
    cout << abs(0) << endl ;


    cout << fabs(-3.0) << endl ;
    cout << fabs(-3.5) << endl ;
    cout << fabs(3.5) << endl ;


    cout << ceil(5.1) << endl ;
    cout << ceil(5.8) << endl ;


    cout << floor(5.1) << endl ;
    cout << floor(5.8) << endl ;

    cout << pow(3.0,2)/2.0 << endl ;
    cout << pow(3.0,2)/2 << endl ;

    cout << 7/abs(-2)<< endl ;

    cout << (7 + sqrt(4.0))/3.0 << endl ;

    cout << sqrt(pow(3,2)) << endl ;

//Comparison of expressions
    int num1 = (12 * 3 + 17) , num2 = (12 * (3 + 7)); 
    cout << "exp1 : " << num1 << endl ;
    cout << "exp2 : " << num2 << endl ;
    cout <<"Is exp1 is equal to exp2 : " << (num1 == num2) << endl ;

    return 0 ;
}

