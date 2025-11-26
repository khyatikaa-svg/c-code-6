#include <stdio.h>

int main() {
    int n, i, key, low, high, mid;
    int arr[100];  // You can change the size if needed

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements in sorted order: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    // Binary Search
    low = 0;
    high = n - 1;

    while (low <= high) {
        mid = (low + high) / 2;

        if (arr[mid] == key) {
            printf("Element found at position %d\n", mid + 1);
            return 0;
        } 
        else if (arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }

    printf("Element not found in the array.\n");

    return 0;
}
