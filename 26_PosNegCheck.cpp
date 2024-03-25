#include<iostream>
using namespace std ;
int main ()
{
    int num ;
    cout << "Enter the number : ";
    cin >> num ;
    if (num == 0){
        cout << "The entered number is zero." ;
    }
    else if (num > 0) {
        cout << "The entered number is positive." ;
    }
    else
    {
        cout <<"The entered number is negative." ;
    }
    return 0 ;
}