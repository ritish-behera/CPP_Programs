#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int number;

    cout << "Enter a number: ";
    cin >> number;

    if (number <= 1) {
        cout << number << " is not a prime number." << endl;
    } else {
        int limit = sqrt(number);
        bool isPrime = true;

        for (int i = 2; i <= limit; i++) {
            if (number % i == 0) {
                isPrime = false;
                break; // exit the loop if a divisor is found
            }
        }

        if (isPrime) {
            cout << number << " is a prime number." << endl;
        } else {
            cout << number << " is not a prime number." << endl;
        }
    }

    return 0;
}
