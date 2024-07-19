#include<stdio.h>
int main()
{
    int x,y, a= 10, b = 20;
    x = 50 + ++a;

    y = 100 + b++;
    printf("x = %d a = %d\n",x,a);
    printf("y = %d b = %d\n",y,b);
    return(0);
}
