#include<iostream>
using namespace std;
int main()
{
    int num1, num2, temp  ;
    cout <<"Enter the 1st number : ";
    cin >> num1 ;
    cout << "Enter the 2nd number : ";
    cin >> num2 ;
    temp = num1 ;
    num1 = num2 ;
    num2 = temp ;
    cout << "The number after swapping is :" << num1 << num2 << endl ;
    return 0 ; 
}
