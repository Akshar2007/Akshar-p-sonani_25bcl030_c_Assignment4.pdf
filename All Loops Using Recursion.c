#include <stdio.h>


void printNumbers(int n) {
    if(n == 0)
        return;
    printNumbers(n - 1);
    printf("%d ", n);
}


int sum(int n) {
    if(n == 0)
        return 0;
    else
        return n + sum(n - 1);
}


void reversePrint(int n) {
    if(n == 0)
        return;
    printf("%d ", n);
    reversePrint(n - 1);
}

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    printf("Numbers from 1 to %d: ", n);
    printNumbers(n);
    printf("\nSum = %d\n", sum(n));
    printf("Reverse order: ");
    reversePrint(n);

    return 0;
}
