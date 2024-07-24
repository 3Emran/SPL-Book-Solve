/*nested if else statement*/
#include <stdio.h>
int main()
{
    float time;
    scanf("%f", &time);
    if((time >= 0.) && (time<12.))
        printf("Good Morning\n");
    else if((time >= 12.) && (time < 18.))
        printf("Good Afternoon\n");
    else if((time >= 18.) && (time < 24.))
        printf("Good Evening\n");
    else
        printf("Time is out of range\n");
    return 0;
}
