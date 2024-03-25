#include <iostream>
using namespace std;
int main() {
    int num1 = -25 ;
    unsigned int num2 = -25 ;
    cout << "Integer :" << num1 << endl ;
    cout << "Unsigned Integer :" << num2 << endl ;
    return 0 ;
}

/*When we assign a negative value to an unsigned integer variable, the c++ language specification
 dictates that the negative value will be interpreted as a large positive value that wraps around 
 due to the characteristics of unsigned arithmetic*/