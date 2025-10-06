/* Given an integer number n, return the difference between
the product of its digits and the sum of its digits.
Input: n = 234
Output: 15
Explanation:
Product of digits = 2 * 3 * 4 = 24
Sum of digits = 2 + 3 + 4 = 9
Result = 24 - 9 = 15 */

#include <stdio.h>

int sum(int num)
{
    int sum = 0;
    if (num < 10)
    {
        return sum=num;
    }
    while(num>0)
    {
        sum+=num%10;
        num=num/10;
    }
    return sum;
}

int prod(int num)
{
        int prod=1;
    if (num < 10)
    {
        return prod=num;
    }
    while(num>0)
    {
        prod*=num%10;
        num=num/10;
    }
    return prod;
}

void diff(int num, int sum, int prod)
{
    int result=prod-sum;
    printf("%d is the difference between %d and %d", result, prod, sum);
}

int main()
{
    int n;
    printf("enter number\n");
    scanf("%d", &n);
    int s=sum(n);
    int p=prod(n);
    printf("sum is %d\n",s);
    printf("product is %d\n",p);    
    diff(n, s, p);

    return 0;
}