#include <stdio.h>

int diff(int n)
{
    int sum = 0, prod = 1;
    while (n > 0)
    {
        int digit = n % 10;
        sum += digit;
        prod *= digit;
        n /= 10;
    }
    return prod - sum;
}
int main()
{
    int n;
    printf("enter number\n");
    scanf("%d", &n);
    int result = diff(n);
    printf("%d", result);
    return 0;
}