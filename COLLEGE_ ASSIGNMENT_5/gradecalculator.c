 #include <stdio.h>

int main()
{
    int marks;
    printf("Enter obtained marks of the student : ");
    scanf("%d", &marks);
   if (marks > 100 || marks < 0) {
    printf("Invalid marks entered.\n");
   }
    else if(marks >=90 && marks<=100)
    {
        printf("Grade A");
    }
    else if(marks >=80 && marks<90){
        printf("Grade B");
    }
     else if(marks >=70 && marks<80){
        printf("Grade C");
    }
 else if(marks >=60 && marks<70){
        printf("Grade D");
    }
 else if(marks >=40 && marks<60){
        printf("Grade E");
    }
    else 
      printf("FAILED !!!");

	return 0;
}
