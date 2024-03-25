#include<iostream>
using namespace std ;
int main()
{
    int num1 , num2 ;
    cout << " Enter the num1 : " << endl ;
    cin >> num1 ;
    cout << " Enter the num2 : " << endl ;
    cin >> num2 ;
    int quotient = num1 / num2 ;
    int remainder = num1 % num2 ;
    cout << "The quotient of num1 divided by num2 is : "<< quotient << endl ;
    cout << "The remainder of num1 divided by num2 is : "<< remainder << endl ;
    return 0 ;
}