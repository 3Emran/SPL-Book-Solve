#include<stdio.h>
int main()
{
    int a=1,b=2,c=3;
    c += (a>0 && a <= 10) ? ++a :a/b;
    printf("%d",c);

}
