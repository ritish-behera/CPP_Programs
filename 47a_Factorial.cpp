#include<iostream>
using namespace std ;
int main()
{
    int num ;
    cout << "Enter a single digit number : " << endl ;
    cin >> num ;
    if (num >= 0 && num <= 9){
        int fact = 1 ;
        for (int i = 1; i <=num; i++){
            fact = fact * i ;  
        }
    cout << "The factorial of " << num << " is " << fact << endl;
    }
    else{
        cout << "The entered number is not a single digit number." ;
    }
    return 0 ;
}