#include <stdio.h>

int main() {
    int n, i, key, found = 0;

    // Input array size
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Input array elements
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input element to search
    printf("Enter the element to search: ");
    scanf("%d", &key);

    // Linear Search
    for(i = 0; i < n; i++) {
        if(arr[i] == key) {
            printf("Element %d found at position %d.\n", key, i + 1);
            found = 1;
            break;
        }
    }

    // If element not found
    if(found == 0) {
        printf("Element %d not found in the array.\n", key);
    }

    return 0;
}
