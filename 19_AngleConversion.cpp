#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    double deg, rad ;
    int num{};
    cout <<"Type 1 : Convert Degree to Radian \nType 2 : Convert Radian to Degree " << endl ;
    cin >> num;
    switch (num){
    case 1:
        cout <<"Enter the value in degree : ";
        cin >> deg ;
        rad = (M_PI * deg)/ 180 ;
        cout << deg << " degree is " << rad <<" radian.";
        break ;
    case 2:
        cout <<"Enter the value in radian : ";
        cin >> rad ;
        deg = (180 * rad)/ M_PI ;
        cout << rad << " radian is " << deg <<" degree .";
        break;
    }
    return 0 ;
}