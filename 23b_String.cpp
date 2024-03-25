#include<iostream>
#include<string>
using namespace std ;
int main ()
{
    string name ,FirstName, LastName, FullName ;
    cout << "Enter your first name : " ;
    cin >> FirstName ;
    cout << "Enter your last name : " ;
    cin >> LastName ;
    FullName = FirstName ;
    FullName.append(" ") ;
    FullName.append(LastName) ;
    cout <<"Your full name is " << FullName ;
    return 0 ; 
}