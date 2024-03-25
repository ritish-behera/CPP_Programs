#include <iostream>
#include<iomanip>
using namespace std;

int main() {

//1. cout.setf(ios::fixed)

double a = 3.2212822;

cout.setf(ios::fixed);



cout<<endl<<"output of 3.2212822 for cout.setf(ios::fixed): "<<a<<endl;


//2.cout.setf(ios::showpoint)

double b = 12.34;

cout.setf(ios::showpoint);

cout<<endl<<"output of 12.34 for cout.setf(ios::showpoint): "<<b<<endl;


//3.cout.precision(a_number)

double c = 2.33333333;
  
cout.precision(3);
  
cout<<endl<<"output of 2.33333333 for cout.precision(a_number=3): "<<c<<endl;

    return 0;
}