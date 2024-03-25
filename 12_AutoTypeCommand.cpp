#include <iostream>
#include <typeinfo>
using namespace std ;
int main()
{
    auto datatype =66 ;
    cin >> datatype ;
    cout << "The datatype is : " << typeid(datatype).name()<< endl ;
    return 0 ;
}
