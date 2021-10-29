#include<stdio.h>
int main()
{
	float v,c,d,g,R;
	printf("Enter the v value:  ");
	scanf("%f",&v);
	printf("Enter the c value:  ");
        scanf("%f",&c);
        printf("Enter the d value:  ");
        scanf("%f",&d);
        printf("Enter the g value:  ");
        scanf("%f",&g);
	R=((2*v)+(6.22)*(c+d))/(g+v);
	printf("%f\n",R);
	return 0;
}
