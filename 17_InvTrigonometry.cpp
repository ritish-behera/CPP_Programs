#include<iostream>
#include<cmath>
using namespace std ;
int main ()
{
    double x = 0.785 ;
    cout <<"The value of asin(theta) is " << asin(x) <<endl ;
    cout <<"The value of acos(theta) is " << acos(x) <<endl ;
    cout <<"The value of atan(theta) is " << atan(x) <<endl ;
    cout <<"The value of acot(theta) is " << 1/atan(x) <<endl ;
    cout <<"The value of asec(theta) is " << 1/acos(x) <<endl ;
    cout <<"The value of acosec(theta) is " << 1/asin(x) <<endl ;
    return 0 ;

}