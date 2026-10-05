// Find the biggest of three numbers.
#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter the 1st number : ");
    scanf("%d", &a);
    printf("Enter the second number : ");
    scanf("%d", &b);
    printf("Enter the 3rd number : ");
    scanf("%d", &c);

    if (a >= b)
    {
        if (a >= c)
        {
            printf("%d is the largest\n", a);
        }
        else
        {
            printf("%d is the largest\n", c);
        }
    }
    else
    {
        if (b >= c)
        {
            printf("%d is the largest\n", b);
        }
        else
        {
            printf("%d is the largest\n", c);
        }
    }
    return 0;
}
