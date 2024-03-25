#include <iostream>
#include <cmath>
using namespace std ;
int main ()
{
    int num1, num2 ;
    cout << "Enter the first number : " << endl ;
    cin >> num1 ;
    cout << "Enter the second number : " << endl ;
    cin >> num2 ;

    cout << (num1+num2) << endl ;
    cout << (num1-num2) << endl ;
    cout << (num1*num2) << endl ;
    cout << (num1/num2) << endl ;
    cout << (num1%num2) << endl ;
    cout << (num1++) << endl ;
    cout << (num1-num2) << endl ;
    cout << (num1=num2) << endl ;
    cout << (num1+=num2) << endl ;
    cout << (num1-=num2) << endl ;
    cout << (num1*=num2) << endl ;
    cout << (num1/=num2) << endl ;
    cout << (num1%=num2) << endl ;
    cout << (num1&=num2) << endl ;
    cout << (num1|=num2) << endl ;
    cout << (num1^=num2) << endl ;
    cout << (num1>>=num2) << endl ;
    cout << (num1<<=num2) << endl ;

    return 0 ;

    
}