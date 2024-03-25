#include<iostream>
using namespace std ;
int main (){
    int num1 = 10 ;
    int prenum = ++num1 ;   //Output will be 11
    cout << "The number after pre increment is :  " << prenum << endl ;

    int num2 = 10 ;
    int postnum = num2++ ;  //Output will be 10
    cout << "The number after post increment is :  " << postnum << endl ;

    return 0 ;

}