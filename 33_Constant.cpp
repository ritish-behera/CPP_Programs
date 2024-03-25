#include<iostream>
using namespace std ;
int main()
{
    const int height = 6 ;
    //height = 7 ;
    cout << height << endl ;
    return 0 ;
}
/*It will give an compilation error as 
variable is already set to constant and 
we cannot change it by any means.*/