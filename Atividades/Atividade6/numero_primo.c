#include <stdio.h>

int is_prime(int n) {
    if (n <= 1) {
        return 0;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int start, end;
    do {
        printf("Enter the start of the interval (positive): ");
        scanf("%d", &start);
        printf("Enter the end of the interval (positive and different from start): ");
        scanf("%d", &end);

        if (start < 0 || end < 0) {
            printf("Both numbers must be positive!\n");
        } else if (start == end) {
            printf("Start and end must be different!\n");
        }
    } while (start < 0 || end < 0 || start == end);

    int min = (start < end) ? start : end;
    int max = (start > end) ? start : end;

    printf("Prime numbers between %d and %d:\n", min, max);
    for (int i = min; i <= max; i++) {
        if (is_prime(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}
