#include <stdio.h>
#include <stdlib.h>

int main()
{
    float per;
    printf("Enter the percentage of the student :");
    scanf("%f", &per);
    if(per>80)
        printf("\nA grade");
    else if(per<80 && per>=70)
        printf("\nB grade");
    else if(per<70 && per>=60)
          printf("C grade");
    else if(per<60 && per>=45)
        printf("D grade");
    else
         printf("Fail");
    return 0;
}
