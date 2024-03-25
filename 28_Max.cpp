#include<iostream>
using namespace std ;
int main ()
{
    int num1, num2, num3, max ;
    cout << "Enter the three numbers :" ;
    cin >> num1 >> num2 >> num3 ;
    if (num1 > num2 && num1 > num3){
        max = num1 ;
    }
    else if(num2 > num1 && num2 > num3) {
        max = num2 ;
    }
    else /*if(num3 > num1 && num3 > num2)*/{
        max = num3 ;
    }
    cout <<"The maximum of thre numbers is : "<< max << endl ;
    return 0 ;
}
