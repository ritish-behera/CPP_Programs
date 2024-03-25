#include<iostream>
using namespace std ;
int main()
{
    int arr[5] ={1,3,5,7,9};
    int sum = 0 ;
    for (int i = 0; i <=4; i++){
        sum = sum + arr[i] ;
    }
    cout << "The sum of elements of the array is " << sum <<endl ;  
    return 0;
}