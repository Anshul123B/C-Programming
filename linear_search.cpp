#include <stdio.h>
int linearSearch(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            return i; 
        }
    }
    return -1; 
}

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int target;
    printf("Enter the target value to search for: ");
    scanf("%d", &target);
    int result = linearSearch(arr, n, target);

    if (result != -1) {
        printf("Target value %d found at index %d.\n", target, result);
    } else {
        printf("Target value %d not found in the array.\n", target);
    }

    return 0;
}

