#include <stdio.h>

int main()
{
    int num, first_digit, last_two_digits, rotated_num;
    printf("Enter a three-digit number: ");
    scanf("%d", &num);
    first_digit = num / 100;
    last_two_digits = num % 100;
    rotated_num = (last_two_digits * 10) + first_digit;
    printf("Rotated number: %d\n", rotated_num);
    return 0;
}
