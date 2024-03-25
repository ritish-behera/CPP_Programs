#include <iostream>
using namespace std;

bool isPerfect(int num) {
    int sum = 1; 

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            sum += i;
            if (i != num / i) {
                sum += num / i;
            }
        }
    }
    return sum == num;
}

int main() {
    cout << "Perfect numbers less than or equal to 10000:\n";

    for (int i = 2; i <= 10000; i++) {
        if (isPerfect(i)) {
            cout << i << " ";
        }
    }

    cout << endl;

    return 0;
}
