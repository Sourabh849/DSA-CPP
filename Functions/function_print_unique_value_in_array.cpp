#include <iostream>
using namespace std;

// Function to print numbers that appear only once
void printUnique(int arr[], int size) {
    cout << "Unique numbers in the array are: ";

    for (int i = 0; i < size; i++) {
        int count = 0;

        // Count how many times arr[i] appears in the array
        for (int j = 0; j < size; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }

        // If the count is 1, then it's a unique number
        if (count == 1) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;
}

// Main function
int main() {
    int arr[] = {4, 5, 6, 7, 4, 5, 8}; // Sample input
    int size = sizeof(arr) / sizeof(arr[0]); // Calculate array size

    printUnique(arr, size); // Call the function

    return 0;
}
