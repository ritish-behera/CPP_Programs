#include <iostream>
using namespace std;

int add(int a, int b);

int main() {
    int result = add(3, 4);
    cout << "The sum is: " << result << endl;
    return 0;
}


int add(int a, int b) {
    return a + b;
}
