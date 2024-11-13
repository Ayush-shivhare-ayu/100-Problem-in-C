//date---->12-11-24
//19. Remove duplicates from an array.

#include <stdio.h>

int main() {
    int arr[] = {1, 1, 1, 1, 2, 2, 3, 4, 5};  // Original array
    int temp[9];  // Temporary array to store unique elements
    int k = 0;  // Index for the temp array

    // Iterate through the original array
    for (int i = 0; i < 9; i++) {
        int isDuplicate = 0;

        // Check if the current element is already in the temp array
        for (int j = 0; j < k; j++) {
            if (arr[i] == temp[j]) {
                isDuplicate = 1;  // Mark as duplicate
                break;
            }
        }

        // If it's not a duplicate, add it to the temp array
        if (!isDuplicate) {
            temp[k] = arr[i];
            k++;  // Increment the index for the temp array
        }
    }

    // Print the unique elements
    printf("Unique elements: ");
    for (int i = 0; i < k; i++) {
        printf("%d ", temp[i]);
    }

    return 0;
}

