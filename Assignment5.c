#include <stdio.h>

int main() {
    int num, sum = 0;

    printf("Enter a three digit number: ");
    scanf("%d", &num);

    // Calculate sum of digits
    sum += num % 10;
    num /= 10;
    sum += num % 10;
    num /= 10;
    sum += num % 10;

    printf("The sum of digits is: %d", sum);

    return 0;
}
