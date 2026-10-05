#include <stdio.h>

int main() {
    int num;
   printf("Enter the digit : ");
   scanf("%d", &num);
   printf("Your result of Left Shift : %d\n",num>>1);
   printf("Your result of Right Shift : %d\n",num<<1);
    return 0;
}