#include<stdio.h>
int main()
{
	int i=2,res=0,num=0;
	printf("Enter the number:  ");
	scanf("%d",&num);
	while(i<=num-1)
	{
		res=num%i;
	        if (res==0)
		{
			printf("Given is not a prime number\n");
			return 0;

		}
	        i=i+1;
	}
   
		printf("Given numbe is a prime number\n");
		return 0;


}

