#include <stdio.h>

void rotateArray(int arr[], int n, int k) {
    int temp[n];  // Temporary array to store rotated elements
    k = k % n;    // Handle k > n

    for(int i = 0; i < n; i++) {
        temp[(i + k) % n] = arr[i];  // Place each element in rotated position
    }

    // Copy back to original array
    for(int i = 0; i < n; i++) {
        arr[i] = temp[i];
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 2;

    rotateArray(arr, n, k);

    printf("Rotated Array: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
