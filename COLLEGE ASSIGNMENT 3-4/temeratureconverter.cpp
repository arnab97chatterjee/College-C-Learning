#include <stdio.h>
#include <math.h>

int main()
{
    float celsius, fahrenheit;

    printf("Enter temperature in celsius : ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9 / 5) + 32;
    printf("Temperature in Fahrenheit = %f \n", fahrenheit);

    printf("Enter temperature in Fahrenheit : ");
    scanf("%f", &fahrenheit);

    celsius = (fahrenheit - 32) * 5 / 9;
  
    printf("Temperature in Celsius = %f\n", celsius);

    return 0;
}
