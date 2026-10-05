#include <stdio.h>
#include <math.h>
int main() {
 int i,n,arm,digit,exp,count=0;
    printf("enter number: ");
    scanf("%d",&n);
    
 arm = 0;
    i=n;
      while(i!=0){
            i/=10;
            count++;
        }
        exp = count;
    for(i=n;i>0;i/=10){
        digit = i%10; 
        arm = arm+ round(pow(digit,exp));
        
    }
    if(arm==n){
    printf("%d is an ARMSTRONG NUMBER. ", arm);
    }
    else{
      printf("%d is not equals to %d, so %d is NOT AN ARMSTRONG NUMBER. ",arm,n,n); 
    }

    return 0;
}