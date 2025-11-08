#include <stdio.h>


void power();
void leapYear();
void factorial();
void reverseNumber();
void sumOfDigits();
void palindrome();

int main() {
    int choice;

    while (1) {
        printf("\n===== MENU =====\n");
        printf("1. Power of a number\n");
        printf("2. Check Leap Year\n");
        printf("3. Factorial of a number\n");
        printf("4. Reverse of a number\n");
        printf("5. Sum of digits\n");
        printf("6. Check Palindrome\n");
        printf("7. Exit\n");
        printf("================\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: power(); break;
            case 2: leapYear(); break;
            case 3: factorial(); break;
            case 4: reverseNumber(); break;
            case 5: sumOfDigits(); break;
            case 6: palindrome(); break;
            case 7: 
                printf("Exiting program. Thank you!\n");
                return 0;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
    return 0;
}


void power() {
    int base, exp, result = 1;
    printf("Enter base and exponent: ");
    scanf("%d%d", &base, &exp);

    for (int i = 1; i <= exp; i++)
        result *= base;

    printf("Result = %d\n", result);
}


void leapYear() {
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        printf("%d is a Leap Year.\n", year);
    else
        printf("%d is NOT a Leap Year.\n", year);
}


void factorial() {
    int n;
    long long fact = 1;
    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
        fact *= i;

    printf("Factorial of %d = %lld\n", n, fact);
}


void reverseNumber() {
    int n, rev = 0, rem;
    printf("Enter a number: ");
    scanf("%d", &n);

    while (n != 0) {
        rem = n % 10;
        rev = rev * 10 + rem;
        n /= 10;
    }

    printf("Reversed number = %d\n", rev);
}


void sumOfDigits() {
    int n, sum = 0, rem;
    printf("Enter a number: ");
    scanf("%d", &n);

    while (n != 0) {
        rem = n % 10;
        sum += rem;
        n /= 10;
    }

    printf("Sum of digits = %d\n", sum);
}


void palindrome() {
    int n, rev = 0, rem, temp;
    printf("Enter a number: ");
    scanf("%d", &n);
    temp = n;

    while (n != 0) {
        rem = n % 10;
        rev = rev * 10 + rem;
        n /= 10;
    }

    if (rev == temp)
        printf("%d is a Palindrome.\n", temp);
    else
        printf("%d is NOT a Palindrome.\n", temp);
}
