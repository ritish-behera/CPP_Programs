#include <iostream>
#include <cstdlib> 
#include <ctime>  

using namespace std; 

int main() {
    
    srand(static_cast<unsigned>(time(0)));

    
    for (int i = 0; i < 10; i++) {
        int random_number = rand();
        cout << "Random number " << i + 1 << ": " << random_number << endl;
    }

    return 0;
}
