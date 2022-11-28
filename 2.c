#include <stdio.h>

int min(int a, int b) {
    return (a < b) ? a : b;
}

int main() {
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d%d%d", &a, &b, &c);

    printf("The smallest of these numbers is: %d\n", min(a, (min(b, c))));

    return 0;
}
