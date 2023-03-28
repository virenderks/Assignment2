#include <stdio.h>

int main() {
    int num1, num2, temp;

    printf("Enter two numbers: ");
    scanf("%d%d", &num1, &num2);

    // Swap values using temporary variable
    temp = num1;
    num1 = num2;
    num2 = temp;

    printf("After swapping, num1 = %d and num2 = %d", num1, num2);

    return 0;
}
