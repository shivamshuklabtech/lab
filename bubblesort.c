#include <stdio.h>

int main() {
    int arr[] = {17, 3, 5, 8, 34, 21, 4, 22};
    int n = 8;  // number of elements
    int i, j, temp;

    printf("Original array: ");
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);
    
    // Bubble Sort logic
    for(i = 0; i < n - 1; i++) {
        for(j = 0; j < n - i - 1; j++) {
            if(arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("\nSorted array: ");
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
