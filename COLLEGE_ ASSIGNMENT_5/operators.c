#include <stdio.h>

int main()
{
   int a , b;
   printf("Enter two digits : ");
   scanf("%d %d", &a, &b);
   printf("Your result of bitwise AND : %d\n",a&b);
   printf("Your result of bitwise OR : %d\n",a|b);
   printf("Your result of bitwise XOR : %d\n",a^b);
   
   return 0;
}
