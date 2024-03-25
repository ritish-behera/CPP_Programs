#include <iostream>
#include <cmath>

using namespace std;

double factorial(int n) {
    if (n <= 1) return 1;
    double fact = 1.0;
    for (int i = 2; i <= n; ++i) {
        fact *= i;
    }
    return fact;
}

double calculateSin(double x, int terms) {
    double result = 0.0;
    int sign = 1;

    for (int i = 0; i < terms; ++i) {
        int exponent = 2 * i + 1;
        result += sign * pow(x, exponent) / factorial(exponent);
        sign *= -1;
    }

    return result;
}

int main() {
    double x = 1.0; 
    int max_terms = 5; 

    cout << "Taylor series expansion of sin(x) for x = " << x << ":\n";
    cout << "Terms\tApproximation\n";

    for (int i = 0; i <= max_terms; ++i) {
        double approximated_value = calculateSin(x, i);

        cout << i << "\t" << approximated_value << endl;
    }

    return 0;
}
