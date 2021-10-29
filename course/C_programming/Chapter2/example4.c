#include<stdio.h>
int main()
{
	float x,X;
	printf("Enter the x value:    ");
	scanf("%f",&x);
	X=((12*x)*(x*x*x))/((4*x))+((8)*(x*x))/((4*x))+((x)/(8*x))+((8)/(8*x));
	printf("Sum of value X:%f\n",X);
	return 0;
}
