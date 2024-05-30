#include <stdio.h>

int main() {
    int num, sum = 0, product = 1;
    printf("Enter the Number:");
    scanf("%d", &num);

    while (num > 0) {
        int r = num % 10;
        sum += r;
        product *= r;
        num = num / 10;
    }

    printf("Sum of digits is %d and product of digits is %d", sum, product);
    return 0;
}
