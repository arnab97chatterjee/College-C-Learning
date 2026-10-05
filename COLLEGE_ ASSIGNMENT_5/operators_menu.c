#include <stdio.h>
int main()
{
    int a,b,choice;
    printf("Enter two numbers ");
    scanf("%d %d",&a , &b);
    printf("Enter your choice : ");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
     printf("Addition : %d", a+b);
        break;
     case 2:
     printf("Multiplication : %d", a*b);
        break;
     case 3:
     printf("Substraction : %d", a-b);
        break;
     case 4:
     printf("Division : %d", a/b);
        break;
     case 5:
     printf("Modulo : %d", a%b);
        break;
     default:
     printf("Invalid Choice!!!");
        break;
    }
	return 0;
}
 