#include <iostream>
using namespace std;

int main() {
int n;

cout<<"Enter the number of rows: "<<endl;
cin>>n;

  for(int row=0;row<=n;row++)
  {
     for(int col=0;col<n-row;col++)
     {
         cout<<" ";
       
     }

      for(int col=1;col<=row;col++)
     {
         cout<<"* ";
       
     }

 cout<<endl;
  }
  
    return 0;
}