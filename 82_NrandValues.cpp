#include<iostream>
#include <bits/stdc++.h> 
using namespace std;

int main() {

   
 float n;
  vector<double> num;


 cout<<"Enter the number of numbers: ";
 cin>>n;

 srand(time(0));

 for(int i=0;i<n;i++)
 {

     cout<<(rand()%100)<<endl;

     num.push_back((rand()%100));



 }
 
 double mean=0 , sd =0;
 cout<<"Mean of the numbers: "<<endl;

 for(int i=0;i<n;i++)
 {
    

    mean+=(num[i]);
   

 }
 
 mean /= n;

 cout<<mean<<endl;

 cout<<"Standard Deviation of the numbers: "<<endl;

 for(int i=0;i<n;i++)
 {

    sd+=(num[i]-mean);
   

 }

 cout<<sd/n<<endl;


    return 0;
}