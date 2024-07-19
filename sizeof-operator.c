#include<stdio.h>
int main()
{
    printf("integer: %d\n",sizeof (int));
    printf("float: %d\n",sizeof (float));
    printf("double: %d\n",sizeof (double));
    printf("character: %d\n",sizeof (char));
    char text[]="California";
    printf("Number of character: %d\n",sizeof(text));
}
