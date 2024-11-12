

//date-->8/11/24
// 17) Implement binary search on a sorted array.


#include <stdio.h>

// Function for binary search
int binarySearch(int arr[], int size, int target) {
    int low = 0;
    int high = size - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;  // Find the middle index

        // If the element is found
        if (arr[mid] == target) {
            return mid;  // Return the index
        }
        // If target is smaller than mid, ignore the right half
        else if (arr[mid] > target) {
            high = mid - 1;
        }
        // If target is larger than mid, ignore the left half
        else {
            low = mid + 1;
        }
    }

    // If the element is not found
    return -1;
}

int main() {
    // Example sorted array
    int arr[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
    int size = sizeof(arr) / sizeof(arr[0]); // Calculate the number of elements in the array
    int target = 7;  // Element to search for

    // Perform binary search
    int result = binarySearch(arr, size, target);

    // Output result
    if (result != -1) {
        printf("Element found at index %d\n", result);
    } else {
        printf("Element not found in the array\n");
    }

    return 0;
}
