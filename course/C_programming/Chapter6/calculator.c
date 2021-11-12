#include<stdio.h>
int main()
{
	float a,b,c;
	int n;
	 printf("Please enter the a value:   ");
             if (scanf("%f", &a)!=1)
	     {
                 printf("error: first input must be a number\n");
                     return 0;
	     }

	   printf("Please choose the operator:\n");
           printf(" 1.addition\n 2.subtraction\n 3.multiplication\n 4.division\n 5.Modular Division\n");
             scanf(" %d", &n);

	  printf("Please enter the b value:  ");
          if (scanf("%f", &b)!=1)
           {
            printf("error: second input must be a number\n");
             return 0;
           }


	   switch(n)
           {
             case 1 :
                 c = a + b;
                     printf("The answer is:%f\n", c);
             break ;

             case 2 :
                 c = a - b;
                     printf("The answer is:%f\n", c);
             break;

             case 3 :
                 c = a * b;
                     printf("The answer is:%f\n", c);
             break;

             case 4 :
                 c = a / b;
                     printf("The answer is:%f\n", c);
             break;


             }
}


