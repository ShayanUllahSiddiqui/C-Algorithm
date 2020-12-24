#include<stdio.h>
void main()
{
        float number1,disc,bill;
        printf("Total purchase=>");

        if(scanf("%f",&number1)==1)
        {
                if(number1>400)
                        disc=number1*0.04;

                else
                        disc=0;
        bill=number1-disc;
        printf("\nYour bill is Rs.%9.2f",bill);
        }

        else
        {
                printf("error enter correct value");
        }
}