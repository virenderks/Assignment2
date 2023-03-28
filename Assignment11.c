#include <stdio.h>

int main()
{
    float inr, usd;
    printf("Enter amount in INR: ");
    scanf("%f", &inr);
    usd = inr / 76.23;
    printf("%.2f INR is equal to %.2f USD\n", inr, usd);
    return 0;
}
