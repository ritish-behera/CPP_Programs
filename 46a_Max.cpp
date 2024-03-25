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
    while ((nos-1) > 0){
        cout << "Enter the next number : "<< endl  ;
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
    return 0 ; 
} 