#include <stdio.h>
#include <ctype.h>
/*lower case to upper case conversion*/
int main()
{
    int lower, upper;
    printf("Enter lower case latter:");
    lower = getchar();
    upper = toupper(lower);

    putchar(upper);
}
