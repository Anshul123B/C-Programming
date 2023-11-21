#include <stdio.h>

// Function to perform linear search
int linearSearch(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            return i; // Return the index if target is found
        }
    }
    return -1; // Return -1 if target is not found in the array
}

int main() {
    int n;

    // Get the size of the array from the user
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];

    // Get array elements from the user
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int target;

    // Get the target value to search for
    printf("Enter the target value to search for: ");
    scanf("%d", &target);

    // Perform linear search
    int result = linearSearch(arr, n, target);

    // Display the result
    if (result != -1) {
        printf("Target value %d found at index %d.\n", target, result);
    } else {
        printf("Target value %d not found in the array.\n", target);
    }

    return 0;
}

