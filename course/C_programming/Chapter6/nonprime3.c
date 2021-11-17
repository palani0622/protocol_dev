


#include<stdio.h>
int nonprime(int num)

{
int count=0,i=2,res;
	for(i=2;i<num-1;i++)
	{
		res=num%i;
		if(res==0)
		{
			count++;
		}
	if(count==0)
	{
	return 0;
	}
	else
	{
	return 1;
	}
    }
}

int main()
{
int i,num;
printf("Enter the number:  ");
scanf("%d",&num);

for(i=num;i>1;i--)
{
	if(nonprime(i))
	{
		if(i%3!=0)
		{
		continue;

	        }
		printf("%d\n",i);
	}

}
}
