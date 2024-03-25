#include <iostream>

using namespace std;

int main() {
    const int maxLimit = 2000;

    cout << "Smallest number expressed as sum of cubes in 2 ways:\n";

    // Searching for the taxicab number 2
    for (int a = 1; a <= maxLimit; a++) {
        for (int b = a + 1; b <= maxLimit; b++) {
            for (int c = a + 1; c <= maxLimit; c++) {
                for (int d = c + 1; d <= maxLimit; d++) {
                    if ((a * a * a + b * b * b) == (c * c * c + d * d * d)) {
                        cout << "Taxicab number 2 found: " << (a * a * a + b * b * b) << " = " << a << "^3 + " << b << "^3 = " << c << "^3 + " << d << "^3" << endl;
                        return 0;
                    }
                }
            }
        }
    }

    cout << "Taxicab number 2 not found within the specified limit." << endl;

    return 0;
}
