#include <stdio.h>

int main() {
    int start,end;
    printf("Enter starting range : ");
    scanf("%d",&start);
    printf("Enter ending range : ");
    scanf("%d",&end);
    for(int i=start; i<=end; i++){
        if(i % 2 == 0){
            printf("%d is even\n", i);
        }
        else{
            printf("%d is odd\n", i);
        }
    }
    return 0;
}
