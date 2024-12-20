#include <iostream>
using namespace std;

void findMinMax(int arr[], int n, int &min, int &max) {
    if (n == 1) {
        min = max = arr[0];
        return;
    }

    if (arr[0] > arr[1]) {
        max = arr[0];
        min = arr[1];
    } else {
        max = arr[1];
        min = arr[0];
    }

    for (int i = 2; i < n; i++) {
        if (arr[i] > max)
            max = arr[i];
        else if (arr[i] < min)
            min = arr[i];
    }
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int min, max;
    findMinMax(arr, n, min, max);

    cout << "Minimum element is: " << min << endl;
    cout << "Maximum element is: " << max << endl;

    return 0;
}
