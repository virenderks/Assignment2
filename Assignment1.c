#include <stdio.h>

int main() {
    int num, unit_digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    unit_digit = num % 10;

    printf("The unit digit of %d is %d", num, unit_digit);

    return 0;
}
