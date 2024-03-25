#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double value = 3.14159265358979323846;

    cout << "Default precision: " << value << endl;
 
    cout << "Precision set to 4 decimal places: ";
    cout << setprecision(4) << value << endl;

    cout << "Precision set to 8 decimal places: ";
    cout << setprecision(8) << value << endl;

    return 0;
}
