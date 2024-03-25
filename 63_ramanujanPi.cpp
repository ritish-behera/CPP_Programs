#include <iostream>
#include <cmath>
using namespace std;

double calculatePi() {
    const double epsilon = 1e-15;
    double sum = 0.0;

    for (int k = 0; ; ++k) {
        double term = (tgamma(4 * k + 1) * (1103 + 26390 * k)) /
                      (pow(tgamma(k + 1), 4) * pow(396, 4 * k));

        sum += term;

        if (abs(term) < epsilon)
            break;
    }

    return 1.0 / ((2 * sqrt(2) / 9801) * sum);
}

int main() {
    double pi = calculatePi();

    cout.precision(16);
    cout << "Approximate value of Pi using Ramanujan's expression: " << pi << endl;

    return 0;
}
