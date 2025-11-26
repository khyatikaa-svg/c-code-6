#include <stdio.h>

int main() {
    int n1, n2, i, j;

    // Input size of first array
    printf("Enter the number of elements in first array: ");
    scanf("%d", &n1);

    int arr1[n1];

    // Input elements of first array
    printf("Enter %d elements for first array:\n", n1);
    for(i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    // Input size of second array
    printf("Enter the number of elements in second array: ");
    scanf("%d", &n2);

    int arr2[n2];

    // Input elements of second array
    printf("Enter %d elements for second array:\n", n2);
    for(i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    // Create third array to store merged elements
    int merged[n1 + n2];

    // Copy elements of first array
    for(i = 0; i < n1; i++) {
        merged[i] = arr1[i];
    }

    // Copy elements of second array
    for(j = 0; j < n2; j++) {
        merged[i + j] = arr2[j];
    }

    // Display merged array
    printf("Merged array:\n");
    for(i = 0; i < n1 + n2; i++) {
        printf("%d ", merged[i]);
    }

    return 0;
}
