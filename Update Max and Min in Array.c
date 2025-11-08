#include <stdio.h>

void findMaxMin(int a[], int n, int *max, int *min) {
    int i;
    *max = *min = a[0];
    for(i=1; i<n; i++) {
        if(a[i] > *max)
            *max = a[i];
        if(a[i] < *min)
            *min = a[i];
    }
}

int main() {
    int a[10], n, i, max, min;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for(i=0; i<n; i++)
        scanf("%d", &a[i]);

    findMaxMin(a, n, &max, &min);

    printf("Maximum = %d\n", max);
    printf("Minimum = %d", min);
    return 0;
}
