#include <stdio.h>

int main() {
    int n, r, i;
    long long int npr = 1;

    printf("Enter n: ");
    scanf("%d", &n);

    printf("Enter r: ");
    scanf("%d", &r);

    for (i = n; i > n - r; i--) {
        npr *= i;
    }

    printf("\nNPR value is: %lld\n", npr);

    return 0;
}
