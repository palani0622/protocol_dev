#include<stdio.h>
int main()
{
	int num,i,count;
	printf("Enter the number: ");
	scanf("%d",&num);
	for(i=num;i>1&&count<3; i--)
	{
		if (i%3==0)
		{
			printf("%d\n",i);
			count=count+1;
		}

	}

}
		

