#include <iostream>
using namespace std;

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    // Initialize the two arrays
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {6, 7, 8, 9, 10};

    // Calculate the sizes of the two arrays
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    // Create a new array to hold elements from both arrays
    int combinedSize = n1 + n2;
    int combinedArr[combinedSize];

    // Copy elements from the first array
    for (int i = 0; i < n1; i++) {
        combinedArr[i] = arr1[i];
    }

    // Copy elements from the second array
    for (int i = 0; i < n2; i++) {
        combinedArr[n1 + i] = arr2[i];
    }

    // Print the combined array
    printArray(combinedArr, combinedSize);

    return 0;
}
