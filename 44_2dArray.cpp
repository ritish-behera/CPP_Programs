#include<iostream>
using namespace std ;
int main()
{
    int rows, cols ;
    cout << "Enter the number of rows : ";
    cin >> rows ;
    cout << "Enter the number of columns : ";
    cin >> cols ;

    int arr2d[rows][cols] ;
    for (int i =0 ; i < rows ; i++){
        for (int j=0 ; j < cols ; j++){
            cout<< "Enter the elemnt [" << i << "][" << j << "] : " ;
            cin >> arr2d[i][j] ; 
        }
    } 

    for (int i =0 ; i < rows ; i++){
        for (int j=0 ; j < cols ; j++){
            cout << arr2d[i][j] ; 
        }
    } 
    return 0 ;
}