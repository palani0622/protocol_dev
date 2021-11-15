#include<stdio.h>
int main()
{
        int i=2,res=0,num=0,count=0;
        printf("Enter the number:  ");
        scanf("%d",&num);
        for(i=2;i<num;i++)
        {
		count=0;
		for(j=2;i<j;j++);
	        {	
                	if (j%i==0)
			count++;
		}
		if( count==0)
                res=num%i;
//              printf("%d\n",res);
                if (res!=0)
		{
		  count=count+i;
                }

	printf("%d count value is :",count);
	}
	return 0;
	
}
                        

