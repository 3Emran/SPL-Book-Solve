#include <stdio.h>
int main()
{
    int age;
    scanf("%d",&age);
    if(age <18)
    {
        printf("Child\n");
     if(age<51)
        {
            printf("Adult\n");
        }
        if(age<71)
        {
            printf("Mature\n");
        }
        else
        {
            printf("old\n");
        }
    }
    return 0;

}
