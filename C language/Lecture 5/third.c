#include <stdio.h>
int main() {
    int j,i,arr[7];
     
    int temp;
    for(i=0;i<7;i++){
        printf("Enter your values here : ");
        scanf("%d",&arr[i]);
    }
    printf("Original array: ");
    for (i = 0; i < 7; i++) {
        printf("%d ", arr[i]);
    }

    for ( i = 0; i < 7 - 1; i++) {
        for (j = 0; j < 7 - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j + 1]
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("\nSorted array: ");
    for (i = 0; i < 7; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

