#include <stdio.h>
#include <stdlib.h>

int main() {
    long long num;
    int count[10] = {0};  // Array to count digits 0–9
    int digit, maxCount = 0, mostFreqDigit = 0;

    printf("Enter an integer: ");
    scanf("%lld", &num);

    // Handle negative numbers
    num = llabs(num);

    // Count occurrences of each digit
    while (num > 0) {
        digit = num % 10;
        count[digit]++;
        num /= 10;
    }

    // Find the digit with the maximum frequency
    for (int i = 0; i < 10; i++) {
        if (count[i] > maxCount) {
            maxCount = count[i];
            mostFreqDigit = i;
        }
    }

    printf("The digit that occurs the most times is %d (appears %d times)\n", mostFreqDigit, maxCount);

    return 0;
}
