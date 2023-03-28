#include <stdio.h>

int main() {
    int num, new_num;

    printf("Enter a number: ");
    scanf("%d", &num);

    new_num = num / 10;

    printf("The number without its last digit is %d", new_num);

    return 0;
}
