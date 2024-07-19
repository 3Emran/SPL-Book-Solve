#include <stdio.h>
int main()
{
    int count=5,n=9;
    float x,sum=0;
    while(count <= n)
    {
        printf("x = ");
        scanf("%f", &x);
        sum += x;
        ++count;
    }
    return 0;
}
