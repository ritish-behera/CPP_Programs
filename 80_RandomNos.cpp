#include <iostream>
#include <random>
#include <ctime>
using namespace std;

int main() {
    // Seed the random number generator with the current time
    mt19937_64 rng(time(0));
    uniform_real_distribution<double> distribution(0, -1);

    // Number of random values to generate
    int numValues = 10;

 
   vector<double> randomValues;
    for (int i = 0; i < numValues; i++) {
        double randomNum = distribution(rng);
        randomValues.push_back(randomNum);
    }

    for(int i=0;i<randomValues.size();i++)
    {

      cout<<randomValues[i]<<endl;


    }

   

    return 0;
}
