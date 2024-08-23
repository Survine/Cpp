#include <iostream>
using namespace std;

void sortZeroOne(int arr[], int size) {
    int i = 0;       // Pointer to start of the array
    int j = size - 1; // Pointer to end of the array

    while (i < j) {
        // Move i forward until a 1 is found
        while (i < j && arr[i] == 0) {
            i++;
        }

        // Move j backward until a 0 is found
        while (i < j && arr[j] == 1) {
            j--;
        }

        // If a 1 is found at i and a 0 is found at j, swap them
        if (i < j) {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
}

int main() {
    int arr[] = {1, 0, 1, 0, 0, 1};
    int size = sizeof(arr) / sizeof(arr[0]);

    sortZeroOne(arr, size);

    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
