#include <iostream>
#include<cmath>
using namespace std;

int main() {
    int sum=0;

  for(int i=36;i<189;i++)

  if(i%2!=0)
  {

    sum+=pow(i,2);


  }

  cout<<sum;
    return 0;
}