#include<stdio.h>
int main()
{
	float b,x,y,a,c,A;
	printf("Enter the b Value:  ");
	scanf("%f",&b);
	printf("Enter the x Value:  ");
        scanf("%f",&x);
	printf("Enter the y Value:  ");
        scanf("%f",&y);
        printf("Enter the a Value:  ");
        scanf("%f",&a);
	printf("Enter the c Value:  ");
        scanf("%f",&c);
	A=((7.7*b)*(x*y+a))/((c-0.8)+(2*b));
	printf("Sum of:  %f\n",A);
	return 0;
}

