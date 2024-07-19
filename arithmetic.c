#include<stdio.h>
#include<math.h>
/*w=2*((i%5) * ( 4 + (j-3) / k+2)) */
int main(void)
{
    int i=8,j=15,k=4,u,v,w;

    u = (i%5);
    v = ( 4 + (j-3) / k+2);
    w = 2 * (u*v);
    printf("Ans. is= %d\n",w);
}
