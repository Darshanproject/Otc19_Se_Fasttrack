#include <stdio.h>

int main() {
    int arr[] = {2, 4, 6, 8, 10};
    int i,n = 5;  // Explicitly specify the size of the array

    // Task 1: Print the elements of the array
    printf("Task 1: Printing the elements of the array\n");
    for ( i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Task 2: Find the sum of the elements
    int sum = 0;
    for ( i = 0; i < n; i++) {
        sum += arr[i];
    }
    printf("Task 2: Sum of elements in the array: %d\n", sum);

    // Task 3: Find the average of the elements
    float average = (float)sum / n;
    printf("Task 3: Average of elements in the array: %.2f\n", average);

    // Task 4: Find the maximum element
    int max = arr[0];
    for ( i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    printf("Task 4: Maximum element in the array: %d\n", max);

    // Task 5: Find the minimum element
    int min = arr[0];
    for ( i = 1; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];    
        }
    }
    printf("Task 5: Minimum element in the array: %d\n", min);

    return 0;
}

