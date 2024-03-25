#include <iostream>
#include<cmath>
using namespace std;

int main() {
   
   int bin=0;
   int dec;
   int i=0;
   
   cin>>dec;

  while(dec>1)
  {

   bin += (dec%2)*pow(10,i);
   dec=dec/2;
   i++;

  }

  if(dec==1)
  {
    bin+=pow(10,i);
  }

    cout<<bin;


    return 0;
}