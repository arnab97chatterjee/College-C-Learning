#include <stdio.h>

int main()
{
    int num1, num2;
    printf("Enter two desired numbers : ");
    scanf("%d %d", &num1, &num2);

    (num1 > num2) ? printf("%d is the biggest", num1) : printf("%d is the biggest",num2);
    return 0;
}
