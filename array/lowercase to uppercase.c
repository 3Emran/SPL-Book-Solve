/* A program that reads in a one dimensional character array
,convert all of item to uppercase, and displayed converted array*/
#include <stdio.h>
#include <ctype.h>
#define SIZE 81

int main()
{
    char letter[SIZE];
    int count;
    for(count=0; count<SIZE; count++){
       letter[count] = getchar();
    }
    for(count=0; count<SIZE; count++){
        putchar(toupper(letter[count]));
    }

}
