#include<stdio.h>
int main()
{
	float speed,fule,distance,range,milage;
	printf("Enter the current speed: ");
	scanf("%f",&speed);
	printf("Enter the current fule leval:  ");
	scanf("%f",&fule);
	printf("Enter the distance of next fule station: ");
	scanf("%f",&distance);
	if (speed<100)
	{
		milage=20;
	}
        if (speed>100)
	{
		milage=10;
	}
	range=(fule*milage);

	if(range<distance)
	{
		printf("Alert!! \nPlease Reduce your corrent  speed\n");
	}
	else
	{
		printf("Go with same speed \n");
	}
	printf("*********************************\n");
	return 0;
} 

		

	
