#include<stdio.h>
int main()
{
	float a,b,c;
	int opeation;
	 printf("Please enter the a value:   ");
             if (scanf("%f", &a)!=1)
	     {
                 printf("error: first input must be a number\n");
                     return 0;
	     }

	   printf("Please choose the operator:\n");
           printf(" 1.addition\n 2.subtraction\n 3.multiplication\n 4.division\n 5.Modular Division\n 6.Exit\n");
             scanf(" %d", &opeation);

	     if(opeation ==6)
		     return 0;


	  printf("Please enter the b value:  ");
          if (scanf("%f", &b)!=1)
           {
            printf("error: second input must be a number\n");
             return 0;
           }


	   if (opeation==1)
           {
                 c = a + b;
                     printf("The answer is:%f\n %f+%f=%f"a,b,c);
          }
	else if(opeation==2)
	{
                 c = a - b;
                     printf("The answer is:%f\n", c);
	}
        else if(opeation==3)
         {
                 c = a * b;
                     printf("The answer is:%f\n", c);
         }
        else if(opeation==4)
     {
                 c = a / b;
     		 printf("The answer is:%f\n", c);
	}
           
      else if(opeation==5)
      {
                 c =(int) a %(int) b;
                     printf("The answer is:%f\n", c);
         }

}


