#include<iostream>
#include<complex>
#include<cmath>
using namespace std;
int main ()
{
    float a, b, c, d, root1, root2 ;
    cout << "Enter the values of a , b and c ." << endl ;
    cin >> a >> b >> c ;
    d = ((b*b) - (4*a*c)) ;
    cout << d << endl;
    if (d > 0){
        cout << "The roots are real and different." << endl ;
        root1 = (-b + sqrt(d))/(2*a);
        root2 = (-b - sqrt(d))/(2*a);
        cout << "Root1 = " << root1 << endl ;
        cout << "Root2 = " << root2 << endl ;
    }
    else if (d < 0){
        cout << "The roots are imaginary and different." << endl ;
        root1 = (-b + sqrt(d))/(2*a);
        root2 = (-b - sqrt(d))/(2*a);
        cout << "Root1 = " << root1 << endl ;
        cout << "Root2 = " << root2 << endl ;
    }
    else if (d = 0){
        cout << "The roots are same." << endl ;
        root1 = (-b)/(2*a);
        cout << "Root1 = Root2 = " << root1 << endl ;
    }
    return 0 ;
}