#include<iostream>
using namespace std ;
int main (){
    int first=0 , second=1 ;
    int nextnum ;
    int n ;
    cout << "Enter the nth position of the series : " ;
    cin >> n ;
    for (int i =0 ; i <=n; i++){
        nextnum = first + second ;
        first = second ;
        second = nextnum ;
    }
    cout <<"The nth Fibonacci number is " << nextnum << endl ;
    return 0 ;
}