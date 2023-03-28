#include <stdio.h>

int main() {
    int num, digit, result;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Enter a digit: ");
    scanf("%d", &digit);
    result = num * 10 + digit;
    printf("Resulting number: %d", result);
    return 0;
}
