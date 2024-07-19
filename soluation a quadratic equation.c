#include <stdio.h>
#include<math.h>
 int main()
 {
     int a,b,c,root,x1,x2;
     printf("Enter the value of a,b and c:");
     scanf("%d %d %d", &a, &b, &c);
     root = sqrt(b*b-4*a*c);
     x1 = (-b+root)/(2*a);
     x2 = (-b-root)/(2*a);
     printf("%d\n",root);
     printf("%d\n",x1);
     printf("%d\n",x2);

    return 0;
 }
