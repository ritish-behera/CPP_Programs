#include <iostream>
using namespace std;

int main() {
   
   int num1,num2;

   cin>>num1>>num2;

   int* ptr1 = &num1;
   int* ptr2 = &num2;

   cout<<"Sum of the numbers using pointers: "<<*ptr1+*ptr2<<endl;
   cout<<"Difference of the numbers using pointers: "<<*ptr1-*ptr2<<endl;
   cout<<"Multiplication of the numbers using pointers: "<<(*ptr1)*(*ptr2)<<endl;
   cout<<"Divsion of the numbers by 2 using pointers: "<<*ptr1/2<<" and "<< *ptr2/2<<endl;

    return 0;
}