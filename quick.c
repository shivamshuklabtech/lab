#include <stdio.h>

int main() {
    int arr[] = {10, 7, 8, 9, 1, 5};
    int n = 6;
    int i, j, pivot, temp;

    printf("Original array:\n");
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);

    // ---------- Quick Sort manually (simplified for this input) ----------
    // Let's choose the last element as pivot (5)
    pivot = arr[n - 1];
    i = -1;
    for(j = 0; j < n - 1; j++) {
        if(arr[j] < pivot) {
            i++;
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    temp = arr[i + 1];
    arr[i + 1] = arr[n - 1];
    arr[n - 1] = temp;

    // After first partition
    int p = i + 1;

    // Manually sort left side (10, 7, 8, 9, 1)
    for(i = 0; i < p - 1; i++) {
        for(j = i + 1; j < p; j++) {
            if(arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    // Manually sort right side (elements after pivot)
    for(i = p + 1; i < n - 1; i++) {
        for(j = i + 1; j < n; j++) {
            if(arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    // ---------- Result ----------
    printf("\n\nSorted array (ascending order):\n");
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
