#include<iostream>
#include<cmath>
using namespace std ;
int main ()
{
    double principal, interest, time, NoT,  SimpInterest, CompInterest ;
    int num ;
    cout << "Enter the principal amount : " ;
    cin >> principal ;
    cout << "Enter the interest rate : " ;
    cin >> interest ;
    cout << "Enter the time period in years : ";
    cin >> time ;
    cout <<"Press 1 for simple interest \nPress 2 for compund intrest " << endl ;
    cin >> num ; 
    switch (num){
    case 1 :
        SimpInterest = (principal * interest * time) / 100 ;
        cout <<"The simple interest is : " << SimpInterest ;
        break ;
    case 2 :
        cout <<"Enter the no of times the interest is applied per time period : " ;
        cin >> NoT ;
        CompInterest = principal * (pow((1 + (interest / NoT) ), NoT * time)) ;
        cout <<"The compund interest is : " << CompInterest ;
        break ;
    }
    return 0 ;

}