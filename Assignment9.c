#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    num = num / 10 * 10;
    printf("Number with last digit as zero: %d", num);
    return 0;
}
