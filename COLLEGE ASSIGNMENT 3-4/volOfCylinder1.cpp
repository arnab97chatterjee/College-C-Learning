#include <stdio.h>
#include <math.h>
int main ()
{
	float r, h;
	printf("Enter the radii of the cylinder : ");
	scanf("%f",&r);
	printf("Enter the height of the cylinder : ");
	scanf("%f",&h);
	float vol = 3.14*pow(r,2)*h; 
	printf("Volume of the cylinder : %f", vol);
	return 0;
}
