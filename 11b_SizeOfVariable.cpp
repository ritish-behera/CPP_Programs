#include <iostream>
#include <typeinfo>
using namespace std ;
int main()
{
    float var  ;
    cout << "Enter the variable : "<< endl ;
    cin >> var ;
    cout << " The size of the variable is : " << sizeof(var) << " Bytes " << endl ;
    return 0 ;
}