#include <iostream>

using namespace std;

double calculatePi(int terms) {
    double pi = 0.0;
    int sign = 1;

    for (int i = 0; i < terms; ++i) {
        pi += sign * 4.0 / (2 * i + 1);
        sign *= -1;
    }

    return pi;
}

int main() {
    int num_terms;
    cout << "Enter the number of terms to approximate pi: ";
    cin >> num_terms;

    double approximated_pi = calculatePi(num_terms);
    cout << "Approximated value of pi with " << num_terms << " terms: " << approximated_pi << endl;

    return 0;
}
