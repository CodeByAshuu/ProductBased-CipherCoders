#include <iostream>
using namespace std;

int main() {
    int N;
    unsigned long long factorial = 1; 

    cout << "Enter a number: ";
    cin >> N;

    if (N < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
    } else {
        for (int i = 1; i <= N; i++) {
            factorial *= i;
        }
        cout << "The factorial of " << N << " is: " << factorial << endl;
    }

    return 0;
}
