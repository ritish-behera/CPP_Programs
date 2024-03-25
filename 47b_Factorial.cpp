#include<iostream>
using namespace std;
int main(){
    int num ;
    cout << "Enter the single digit number : " << endl ;
    cin >> num ;
    if (num >= 0 && num <= 9){
        int fact = 1 ;
        switch(num){
            case 0 : fact = fact ;
                break;
            case 1 : fact = fact*1 ;
                break ;
            case 2 : fact = fact*1*2 ;
                break ;
            case 3 : fact = fact*1*2*3 ;
                break ;
            case 4 : fact = fact*1*2*3*4 ;
                break ;
            case 5 : fact = fact*1*2*3*4*5 ;
                break ;
            case 6 : fact = fact*1*2*3*4*5*6 ;
                break; 
            case 7 : fact = fact*1*2*3*4*5*6*7 ;
                break;
            case 8 : fact = fact*1*2*3*4*5*6*8 ;
                break;
            case 9 : fact = fact*1*2*3*4*5*6*7*8*9 ;
                break;    
        }
    cout << "The factorial of " << num << " is " << fact << endl;   
    }
    else{
        cout << "The entered number is not a single digit number." ;
    }
    return 0 ;
}