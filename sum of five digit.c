#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n;
    scanf("%d", &n);
    //Complete the code to calculate the sum of the five digits on n.
    short int digits = 0;
    while(n > 0){
        digits += n%10;
        n = n/10;
    }
    printf("%d\n",digits);
    return 0;
}
