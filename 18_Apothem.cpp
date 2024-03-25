#include<iostream>
#include<cmath>
using namespace std ;
int main()
{
    double s, n, apothem, areaT ;
    int perimeter=10 ;
    cout <<"Type the length : " ;
    cin >> s ;
    cout <<"Type the no of sides : " ;
    cin >> n ;
    apothem = s/2*(tan((M_PI*(n-2))/2*n));
    cout <<"The apothem of the polygon with sides " << n <<" is " << apothem << endl ;
    areaT = (perimeter*apothem)/2 ;
    cout <<"The area of the triangle is " << areaT << endl ;
    return 0 ;

}