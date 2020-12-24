#include <stdio.h>
int main()
{
    printf("The mimimum attendance for giving the examination is 75 percent. \n");
    printf("enter details to check eligibility:\n");
    float a, b;
    int per;
    printf("enter the total no. of classes held.\n");
    scanf("%f", &a);
    printf("enter the no. of classes attended.\n");
    scanf("%f", &b);
    per = b / a * 100;
    if((b/a) * 100 < 75) {
        printf("you are not eligible for giving the examinations. %d percent attended \n ", per);
        }
         else {
        printf("you are eligible for giving the examinations. %d percent attended \n", per);
        }

    return 0;
}