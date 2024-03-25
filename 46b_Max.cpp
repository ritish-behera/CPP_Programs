#include<iostream>
using namespace std ;
int main()
{
    int nos, num, max ;
    cout << "Enter the total numbers : " ;
    cin >> nos ;
    cout << "Enter first number." << endl ;
    cin >> num ;
    max = -1 ;
   do{
        cout << "Enter the next number : "<< endl ;
        cin >> num ;
        if (max < num ){
            max = num ;
            cout << "The maximum number is : "<< max << endl ;
        }
        else{
            cout << "The maximum number is : "<< max << endl ;
        }
        nos-- ;
    }
    while ((nos-1) > 0) ;
    return 0 ; 
} 