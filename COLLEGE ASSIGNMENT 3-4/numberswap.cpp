#include<stdio.h>

int main()
{
    int a, b, tv;

    printf("Enter value of a: ");
    scanf("%d", &a);
    printf("Enter value of b: ");
    scanf("%d", &b);

    tv = a;
    a = b;
    b = tv;

    printf("After swapping:\n");
    printf("a = %d\n", a);
    printf("b = %d", b);

    return 0;
}
