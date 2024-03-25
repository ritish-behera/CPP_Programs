#include <iostream>
#include <random>
using namespace std;

int main() {
    random_device rd;

    mt19937 gen(rd());


    uniform_int_distribution<int> distribution(1, 10);

    
    int randnum;

    cout<<"Enter the number of numbers"<<endl;
    cin>>randnum;

    for (int i = 1; i <= randnum; ++i) {


        int random_number = distribution(gen);

        cout << "Random Number" << i << ": " << random_number << endl;


        
    }

    return 0;
}
