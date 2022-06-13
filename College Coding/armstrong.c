#include <stdio.h>
#include <math.h>
int main()
{
    int n, rem, originalno, sum = 0, tocount, count = 0;
    printf("Enter NUMBER to check ARMSTRONG: ");
    scanf("%d", &n);
    originalno = n;
    tocount = n;
    while (tocount != 0)
    {
        tocount = tocount / 10;
        count++;
    }

    while (n > 0)
    {
        rem = n % 10;
        sum = sum + pow(rem, count);
        n = n / 10;
    }
    if (originalno == sum)
    {
        printf("The given number is ARMSTRONG Number", sum);
    }
    else
    {
        printf("The given number is not ARMSTRONG Number", sum);
    }
    return 0;
}
