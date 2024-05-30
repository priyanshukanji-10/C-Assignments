#include <stdio.h>

int findMax(int *, int);

int main() {
    printf("Get the maximum value in the array\n");
    int n, i;
    printf("Give the size of the array:");
    scanf("%d", &n);
    int a[n];
    printf("Enter %d numbers:", n);
    for (i = 0; i < n; i++) {
        scanf("%d", (a + i));
    }
    int maxValue = findMax(a, n);
    printf("The maximum value in the array is: %d\n", maxValue);
    return 0;
}

int findMax(int p[], int size) {
    int max = p[0], i;
    for (i = 1; i < size; i++) {
        if (p[i] > max) {
            max = p[i];
        }
    }
    return max;
}
