#include<stdio.h>
int main()

{
	int i,num,res;
	printf("Enter the number:   ");
	scanf("%d",&num);
	for (i=1;i<=20;i++)
	{
		res=i*num;
	  res=i*num;printf(" %.1dx%.1d=%.1d\n",i,num,res);
	/*printf("%d\n",res);*/
	}
}

