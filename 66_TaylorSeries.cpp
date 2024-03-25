#include <iostream>
#include <cmath>

using namespace std;

double calculateExponential(double x, int terms) {
    double result = 1.0; 

    double numerator = 1.0;
    double denominator = 1.0;

    for (int i = 1; i <= terms; ++i) {
        numerator *= x; 
        denominator *= i; 

        result += numerator / denominator; 
    }

    return result;
}

int main() {
    double x = 1.0; 
    int max_terms = 10; 

    cout << "Taylor series expansion of e^x for x = " << x << ":\n";
    cout << "Terms\tApproximation\n";

    for (int i = 0; i <= max_terms; ++i) {
        double approximated_value = calculateExponential(x, i);

        cout << i << "\t" << approximated_value << endl;
    }

    return 0;
}
