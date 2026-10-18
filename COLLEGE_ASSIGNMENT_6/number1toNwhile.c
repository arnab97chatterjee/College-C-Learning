#include <stdio.h>

int main() {
     int i,n;
    printf("Enter the ending range(n) : ");
    scanf("%d", &n);
    i=1;
    while(i<=n){
        printf(" %d ,",i);
        i++;
    }
    
    return 0;
}