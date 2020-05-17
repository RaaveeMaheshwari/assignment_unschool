#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,sum,diff,pro,mod;
    float d;
    printf("Enter a number :");
    scanf("%d",&a);
    printf("Enter another number :");
    scanf("%d",&b);
    sum = a+b;
    diff = a-b;
    pro = a*b;
    d = a/b;
    mod = a%b ;
    printf("Sum of %d and %d is %d \n",a,b,sum);
    printf("Difference of %d and %d is %d \n" ,a,b,diff);
    printf("Product of %d and %d is %d \n",a,b,pro);
    printf("Quotient of %d and %d is %f \n",a,b,d);
    printf("Remainder of %d and %d is %d",a,b,mod);
    return 0;
}
