#include<stdio.h>
int main () 
{
	int smallNumber;
	float mediumNumber;
	printf("Enter smallNo. value: \n");
	scanf("%d",&smallNumber);
	while (getchar() != '\n');
	printf("Enter mediumNo. value: \n");
	scanf("%f",&mediumNumber);
	double largeNumber;
	largeNumber=smallNumber;
	printf("small to large: %.1f\n",largeNumber);
	largeNumber=mediumNumber;
	printf("Medium to large: %.1f\n",largeNumber);
	return 0;
}
