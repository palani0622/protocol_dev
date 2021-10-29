#include<stdio.h>
int main()
{
	float x,y,z;
	printf("Entre the x value: ");
	scanf("%f",&x);
	printf("Entre the y value: ");
        scanf("%f",&y);
	z=((x+3)*(x*x*x))/((y-4)*(y+5));
	printf("%f\n",z);
	return 0;
}
