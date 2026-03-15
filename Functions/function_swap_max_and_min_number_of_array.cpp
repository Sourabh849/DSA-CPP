#include <iostream>
#include <climits>
using namespace std;

void swapMaxAndMin(int arr[], int sz) {
    if (sz == 0) return; // Edge case check

    int smallestIndex = 0;
    int largestIndex = 0;

    // Find indexes of smallest and largest
    for (int i = 1; i < sz; i++) {
        if (arr[i] < arr[smallestIndex]) {
            smallestIndex = i;
        }
        if (arr[i] > arr[largestIndex]) {
            largestIndex = i;
        }
    }

    // Swap values at smallestIndex and largestIndex
    swap(arr[smallestIndex], arr[largestIndex]);

    // Print array after swap
    cout << "Array after swapping:\n";
    for (int i = 0; i < sz; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {2, 3, 4, 5};
    int sz = 3;

    swapMaxAndMin(arr, sz);

    // Optional: print again from main
    cout << "Array in main after function call:\n";
    for (int i = 0; i < sz; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
