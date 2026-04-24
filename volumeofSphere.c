#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main()
{
	float radius;
	double pi,volume;
	printf("Enter Radius: ");
	scanf("%f",&radius);
	pi = 3.14159;
	volume =(4.0/3.0)*pi*radius*radius*radius;
	printf("The Volume of Sphere with Radius %.2f is %.2f.",radius,volume);
	return 0;
} 
