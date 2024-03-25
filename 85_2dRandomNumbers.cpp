#include <iostream>
#include <random>
using namespace std;

int main() {
    
    const int rows = 3;
    const int cols = 4;

    
    random_device rd;
    mt19937 gen(rd());

    
    uniform_real_distribution<double> distribution(-1.0, 1.0);

   
    double random_numbers[rows][cols];

    for (int i = 0; i < rows; ++i) {


        for (int j = 0; j < cols; ++j) {


            random_numbers[i][j] = distribution(gen);



        }


    }

    // Print the generated 2D array
    for (int i = 0; i < rows; ++i) {


        for (int j = 0; j < cols; ++j) {


            cout << random_numbers[i][j] << " ";


        }


        cout << endl;

        
    }

    return 0;
}
