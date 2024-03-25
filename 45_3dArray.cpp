#include<iostream>
using namespace std ;
int main()
{
     int length,rows, cols ;
    cout << "Enter the length in 3rd direction : ";
    cin >> length ;
    cout << "Enter the number of rows : ";
    cin >> rows ;
    cout << "Enter the number of columns : ";
    cin >> cols ;

    int arr3d[length][rows][cols] ;
    for (int i =0 ; i < length ; i++){
        for (int j =0 ; j < rows ; j++){
            for (int k=0 ; k < cols ; k++){
                cout<< "Enter the elemnt [" << i << "][" << j << "][" << k << "] : " ;
                cin >> arr3d[i][j][k] ; 
            }
        } 
    }

     for (int i =0 ; i < length ; i++){
        for (int j =0 ; j < rows ; j++){
            for (int k=0 ; k < cols ; k++){
                cout << arr3d[i][j][k] ; 
            }
        } 
    }
    return 0 ;
}
