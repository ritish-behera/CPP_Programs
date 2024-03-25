#include <iostream>
using namespace std;

int main() {

 int num;
 cout<<"Enter the value of num"<<endl;
 cin>>num;

 int* ptr = &num;

 cout<<"Printing &num: "<<&num<<endl;
 cout<<"Printing the value stored in pointer: "<<ptr<<endl;
 cout<<"Printing *ptr: "<<*ptr<<endl;
 cout<<"Printing the value of num: "<<num<<endl;

 

    return 0;
}