#include <iostream>
#include<cmath>
using namespace std;

int ConvertToDecimal(int n)
{

int dec=0;
 int i=0;

 while(n>0)
 {
    
   
   dec+=(n%10)*pow(2,i);
   n=n/10;

   i++;


 }

 return dec;
  


}

int main() {

 int bin1 , bin2;

 cout<<"Enter the Binary Numbers"<<endl;

 cin>>bin1;
 cin>>bin2;

 cout<<"The sum of the entered binary numbers is: "<<ConvertToDecimal(bin1)+ConvertToDecimal(bin2);


    return 0;
}