#include <stdio.h>
#include <stdlib.h>

int main(){
{
    int input;
    input = ("enter employee name: ");
    input = ("enter employment number: ");
    input = ("enter KRA pin: ");
    input = ("enter hours worked: ");
    int hours,ot = 0;
    printf("\nEnter no of hours employee %d has worked\n");

    if(hours >40)
    {
       ot =ot +  ( hours - 40);
       printf("Employee %d has worked %d hours\n", hours);
       printf("overtime pay is Ksh %d\n", (hours-40)*1.5);

    }
    else
        printf("no of hours worked is %d,which is less than 40 hours, so no over time pay for employees %d\n")

}
     printf("\nTotal overtime pay is %d\n", {ot*1.5});
o
