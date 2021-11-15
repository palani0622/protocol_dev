#include<stdio.h>
int is_prime(int i)
	{
		int j, count=0;
		for (j=2; j<i;j++){
			if (i%j==0){
			count++;
		    }
		}
		if (count !=0){
			return 0;
		}
		else{
			return 1;
		    }
	      }
int main()
	{
		int input,i,res;
		printf("Enter the Number: ");
		scanf("%d",&input);
		for(i=2;i<=input;i++){
			if(is_prime(i)){
				res+=i;
			}
		}
	printf("Result= %d \n",res);
	}
