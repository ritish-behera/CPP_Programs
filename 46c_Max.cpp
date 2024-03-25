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
   for (int i =1 ; i <= (nos-1) ; i++){
        cout << "Enter the next number : "<< endl ;
        cin >> num ;
        if (max < num ){
            max = num ;
            cout << "The maximum number is : "<< max << endl ;
        }
        else{
            cout << "The maximum number is : "<< max << endl ;
        }
    }
    return 0 ; 
} 