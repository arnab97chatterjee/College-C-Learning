#include <stdio.h>

int main()
{
    int n, i = 1;

    printf("Enter N: ");
    scanf("%d", &n);

    if(n >= 1)
    {
        do
        {
            printf("%d ", i);
            i++;
        }
        while(i <= n);
    }

    return 0;
}