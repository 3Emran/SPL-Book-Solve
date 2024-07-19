#include <string.h>
#include <stdio.h>
int main(void)
{
    int x,y;
    if(x<y)
    {
        printf("X is less then y\n");
    }
    else if(x > y)
    {
        printf("X is greater then Y\n");
    }
    else(x = y);
    {
        printf("X is equal to Y\n");
    }

    char answer;
    answer = get_string("What's your name? \n");
    printf("hello, %s\n", answer);
}
