#include <stdio.h>
#include <ctype.h>
#define EOL '\n'
main()
{
    char letter[80];
    int tag, count=0;

    letter[count] = getchar();
    while(letter[count] != EOL){
        count= count + 1;
        letter[count]=getchar();
        tag=count;
    }
    count=0;

    while(count<tag){
        putchar(toupper(letter[count]));
        count++;
    }
}
