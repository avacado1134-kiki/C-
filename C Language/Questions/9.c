//merge two sorted array in one sorted array

#include <stdio.h>

int main() {
    int arr1[] = {1, 3, 5};     // first sorted array
    int arr2[] = {2, 4, 6};     // second sorted array
    int n1 = 3, n2 = 3;         // sizes of the arrays
    int merged[10];             // array to hold merged result (big enough)
    int i = 0, j = 0, k = 0;    // indexes for arr1, arr2, merged

    // Step 1: Compare and merge
    while (i < n1 && j < n2) {   // until one array finishes
        if (arr1[i] < arr2[j])   // pick the smaller element
            merged[k++] = arr1[i++];
        else
            merged[k++] = arr2[j++];
    }

    // Step 2: Copy any leftover elements
    while (i < n1) merged[k++] = arr1[i++];  // if arr1 still has elements
    while (j < n2) merged[k++] = arr2[j++];  // if arr2 still has elements

    // Step 3: Print merged array
    printf("Merged Array: ");
    for (int x = 0; x < k; x++)
        printf("%d ", merged[x]);

    return 0;
}

