#include <stdio.h>
int main()
{
    float age, result,Child;
    scanf("%f",&age);
    if(age> 0 && age<18){
        printf("Child\n");
    }
    else if(age> 18 && age<51){
        printf("Adult\n");
    }
    else if(age> 51 && age<71){
        printf("Mature\n");
    }
    else if (age>71 && age <100)
    {
        printf("Old\n");
    }
    else
        printf("Invalid input\n");
    return 0;
}

