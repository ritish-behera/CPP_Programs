#include<iostream>
using namespace std;
int main()
{
    int num1, num2, num3 ;
    cout << "Enter the three numbers " << endl ;
    cin >> num1 ;
    cin >> num2 ;
    cin >> num3 ;
    if (num1 < num2 && num1 < num3 ){
        if (num2 < num3){
            cout << num1 << num2 << num3 ;
        }
        else {
            cout << num1 << num3 << num2 ;
        }
    }
    else if (num2 < num1 && num2 < num3 ){
        if (num1 < num3){
            cout << num2 << num1 << num3 ;
        }
        else {
            cout << num2 << num3 << num1 ;
        }
    }
    else if (num3 < num1 && num3 < num2 ){
        if (num1 < num2){
            cout << num3 << num1 << num2 ;
        }
        else {
            cout << num3 << num2 << num1 ;
        }
    }
    return 0 ;
}