#include <stdio.h>

int main() {
    int arr[9] = {10, 22, 31, 4, 15, 28, 17, 88, 59};
    int hashTable[10]; // Hash table size = 10
    int i, j;

    // Initialize hash table with -1 (empty)
    for (i = 0; i < 10; i++) {
        hashTable[i] = -1;
    }

    // Insert elements using modulo division method
    for (i = 0; i < 9; i++) {
        int key = arr[i];
        int index = key % 10;

        // Handle collision using linear probing
        while (hashTable[index] != -1) {
            index = (index + 1) % 10;
        }

        hashTable[index] = key;
    }

    // Display hash table
    printf("Hash Table:\n");
    for (i = 0; i < 10; i++) {
        printf("Index %d --> %d\n", i, hashTable[i]);
    }

    return 0;
}
