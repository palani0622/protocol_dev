#include<stdio.h>
int main()
{
	int mango;
	float price=0;
	printf("how many mango's do you have:  ");
	scanf("%d",&mango);
	if (mango>1)
	{
		printf("Enter the price of the mango: \n");
		scanf("%f",&price);
		if (price<30)
		{
                  printf("give me 5kg");
		}
		else
		{
	         printf("give me 2 kg");
		}
        }
	else
	{

	
		printf("no mango valable");
	}
        return 0;
}


