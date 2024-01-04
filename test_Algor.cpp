#include <stdio.h>

void swap(int *a, int *b) {
    int t = *a;
    *a = *b;
    *b = t;
}

int partition(int a[], int l, int r) {
    int pivot, i, j, t;
    pivot = a[r]; // set pivot to the last element
    i = l - 1;
    
    for (j = l; j < r; ++j) {
        if (a[j] <= pivot) {
            ++i;
            swap(&a[i], &a[j]);
        }
    }
    
    swap(&a[i + 1], &a[r]);
    return i + 1;
}

int main() {
    // Example usage:
    int arr[] = {4, 7, 2, 1, 9, 5, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    int partitionIndex = partition(arr, 0, n - 1);
    printf("Array after partition:\n");
    for (int i = 0; i < n; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\nPartition Index: %d\n", partitionIndex);
    
    return 0;
}

