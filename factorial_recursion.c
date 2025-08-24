#include <stdio.h>

unsigned long long fact(int n) {
    if (n == 0 || n == 1) return 1ULL;
    return (unsigned long long)n * fact(n - 1);
}

int main(void) {
    int n;
    printf("Enter a number (0..20): ");
    if (scanf("%d", &n) != 1 || n < 0 || n > 20) {
        printf("Invalid input (must be 0..20)\n"); return 1;
    }
    printf("Factorial(%d) = %llu\n", n, fact(n));
    return 0;
}
