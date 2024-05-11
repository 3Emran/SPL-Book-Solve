//Write a program to find the average of n num
/*algorithm
1. read the value of n
2. assign 0 to sum
3. repeat n times
4. add num to sum
5. end repeat
6. divide sum by n to get the average
7. print average
*/
#include<stdio.h>
int main()
{
    int n,sum=0,i,x[100],avg;
    scanf("%d",&n);
    for(i=1; i<=n; i++){
            scanf("%d",&x[i]);
        sum = sum+x[i];
    }
    avg=sum/n;
    printf("Average: %d\n",avg);
    return 0;
}
