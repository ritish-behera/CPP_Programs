#include<iostream>
using namespace std ;
int main(){
    int  num1 = 10 ;
    while(--num1 > 0){
        if (num1 == 3 ){
            break ;                             // "Break" causes an immediate exit from the switch or loop (while,for etc)
        }
    cout << num1 << endl ;
    }
cout << "End of loop" << endl ;


    int num2 = 10 ;
    while(--num2 > 0){
        if (num2 == 3 ){
            exit (0) ;                          //"Exit()" terminates program execution when it is called .
        }
    cout << num2 << endl ;
    }
cout << "End of loop" << endl ;

return 0 ;
}