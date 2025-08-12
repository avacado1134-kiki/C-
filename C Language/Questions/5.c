// Merge two sorted arrays into one sorted sequence without using extra array

#include <stdio.h>

// Function to swap two integers
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int arr1[] = {1, 5, 9, 10, 15, 20};
    int arr2[] = {2, 3, 8, 13};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    int i = n1 - 1;  // last index of arr1
    int j = 0;       // first index of arr2

    // Step 1: Swap out-of-order elements
    while (i >= 0 && j < n2) {
        if (arr1[i] > arr2[j]) {
            swap(&arr1[i], &arr2[j]);
        }
        i--;
        j++;
    }

    // Step 2: Sort arr1
    for (int p = 0; p < n1 - 1; p++) {
        for (int q = p + 1; q < n1; q++) {
            if (arr1[p] > arr1[q])
                swap(&arr1[p], &arr1[q]);
        }
    }

    // Step 3: Sort arr2
    for (int p = 0; p < n2 - 1; p++) {
        for (int q = p + 1; q < n2; q++) {
            if (arr2[p] > arr2[q])
                swap(&arr2[p], &arr2[q]);
        }
    }

    // Step 4: Print merged result
    for (int p = 0; p < n1; p++)
        printf("%d ", arr1[p]);
    for (int p = 0; p < n2; p++)
        printf("%d ", arr2[p]);

    return 0;
}
