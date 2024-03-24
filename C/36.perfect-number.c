#include <stdio.h>
#include <inttypes.h>

// Function to calculate the sum of the first n natural numbers
long long sum(long long n) {
    return (n * (n + 1)) / 2;
}

int main() {
    long long n = 2;
    int i;

    printf("Enter the range: ");
    scanf("%d", &i);

    printf("%d perfect numbers from 0's are:\n", i);
    printf("6\n"); // 6 is a known perfect number

    int j = 1;
    while (j < i) {
        n *= 4;
        printf("%" PRId64 "\n", sum(n - 1));
        j++;
    }

    return 0;
}
