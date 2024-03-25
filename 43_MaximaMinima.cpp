#include<iostream>
using namespace std ;
int main()
{
    int arr[5]= {5,10,157,20,25} ;
    int max = -1 ;
    int min = INT_MAX ;
    for (int i =0; i <=4; i++){
        if (arr[i] > max){
            max = arr[i] ;
        }
    }
    cout << "The maximum of the array is : "<< max << endl ;
    for (int j =0; j <=4; j++){
        if (arr[j] < min){
            min = arr[j] ;
        }
    }
    cout << "The minimum of the array is : "<< min << endl ;
    return 0 ;
}