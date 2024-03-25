#include<iostream>
using namespace std ;
int main (){
    int first=0 , second=1 ;
    int nextnum ;
    int n = 10 ;
    for (int i =0 ; i <=n; i++){
        nextnum = first + second ;
        cout << nextnum << " " ;
        first = second ;
        second = nextnum ;
    }
    return 0 ;
}
