#include <stdio.h>

int power(int a, int b) {
    int i, p = 1;
    for(i=1; i<=b; i++) {
        p = p * a;
    }
    return p;
}

int main() {
    int a, b, result;
    printf("Enter base and exponent: ");
    scanf("%d%d", &a, &b);
    result = power(a, b);
    printf("%d raised to %d is %d", a, b, result);
    return 0;
}
