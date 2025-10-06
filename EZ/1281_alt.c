//alt better method for 1281 

#include <stdio.h>
int subtractProductAndSum(int n)
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
    scanf("%d",&n);
    int res= subtractProductAndSum(n);
    printf("%d",res);
    return 0;
}