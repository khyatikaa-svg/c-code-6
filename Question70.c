#include <stdio.h>

void rotateRight(int arr[], int n, int k) {
    k = k % n; // Handle if k > n
    int temp[k];

    // Step 1: Copy last k elements to temp
    for (int i = 0; i < k; i++) {
        temp[i] = arr[n - k + i];
    }

    // Step 2: Shift remaining elements to the right
    for (int i = n - 1; i >= k; i--) {
        arr[i] = arr[i - k];
    }

    // Step 3: Copy the k elements from temp to front
    for (int i = 0; i < k; i++) {
        arr[i] = temp[i];
    }
}

int main() {
    int arr[100], n, k;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter k (positions to rotate): ");
    scanf("%d", &k);

    rotateRight(arr, n, k);

    printf("Array after rotating right by %d positions:\n", k);
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
