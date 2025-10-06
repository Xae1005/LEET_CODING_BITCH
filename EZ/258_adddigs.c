/*Given an integer num, repeatedly add all its
digits until the result has only one digit, and 
return it
Input: num = 38
Output: 2
Explanation: The process is
38 --> 3 + 8 --> 11
11 --> 1 + 1 --> 2 
Since 2 has only one digit, return it.
*/

#include<stdio.h>

int addDigits(int num)
{
    if (num<10)
    {
        return num;
    }

    int sum=0;

    while(num>0)
    {
        sum+=num%10;
        num=num/10;
    }
    return addDigits(sum);
}

int main()
{
    int n;
    printf("enter number\n");
    scanf("%d",&n);
    int result=addDigits(n);
    printf("%d", result);
    return 0;
}