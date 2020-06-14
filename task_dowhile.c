#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, sum,i=0;
    do
    {
       printf("Enter a number:");
       scanf("%d", &num);
       sum=sum+num;
       i++;
    }
    while(num!=0);
    printf("Sum of all number is = %d", sum);
    return 0;
}
