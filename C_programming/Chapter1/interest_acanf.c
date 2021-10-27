/* Calculation of simple interest */
/* Author palani Date 24/10/2021 */
#include<stdio.h>
int main()
{
int p,n;
float r,si;
printf("Entre the values of p,n,r: 	");  
scanf("%d,%d,%f",&p,&n,&r);
si= p*n*r/100;
printf("%f\n",si);
return 0;
}
