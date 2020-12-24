
#include <stdio.h>

int main()
{
    int math, comp; 
    float per; 

    printf("Enter subjects marks: ");
    scanf("%d%d",&math, &comp);

    per = (math + comp) / 2.0;

    printf("Percentage = %.2f\n", per);

    if(per >= 90)
    {
        printf("Grade A\n");
    }
    else if(per >= 70)
    {
        printf("Grade B\n");
    }
    else if(per >= 60)
    {
        printf("Grade C\n");
    }
    else if(per >= 50)
    {
        printf("Grade D\n");
    }
    else
    {
        printf("Grade F\n");
    }

    return 0;
}