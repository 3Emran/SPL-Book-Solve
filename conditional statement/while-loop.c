//Consecutive Integer Quantities: Suppose we want to display the consecutive digits 0,1,2,.....9, with one digit on each line

#include <stdio.h>
main()
{
    int digit=0;
    while (digit <= 9){
        printf("%d\n",digit);
        digit ++;
    }
}
