#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <math.h>
int main()
{
    int random=0,a,b,cmp,l,p;
    char str1[50],str2[50];
    double result1,result2,t;
    srand(time(0));
    random=rand() % 8 +1;
    printf("%d",random);
    switch(random)
    {
    case 1:
        {
            printf("\nEnter two strings :");
            scanf("%s %s",str1,str2);
            cmp = strcmp(str1,str2);
            if(cmp==0)
                printf("\n%s is equal to %s",str1,str2);
            else if(cmp>0)
                printf("\n%s is greater than to %s",str1,str2);
            else
                printf("\n%s is smaller than to %s",str1,str2);
            break;
        }
    case 2:
        {
            printf("\nEnter a string : ");
            gets(str1);
            strcpy(str2,str1);
            printf("\nCopied String is %s",str2);
            break;
        }
    case 3:
        {
            printf("\nEnter a string : ");
            gets(str1);
            strrev(str1);
            printf("\nReversed String is %s",str1);
            break;
        }
    case 4:
        {
          printf("\nEnter a string : ");
          gets(str1);
          l=strlen(str1);
          printf("\nLength of String is %d",l);
          break;
        }
    case 5:
        {
          printf("\nEnter a string : ");
          gets(str1);
          printf("\n%s",strupr(str1));
          printf("\n%s",strlwr(str1));
          break;
        }
    case 6:
        {
            printf("\nEnter two numbers: ");
            scanf("%d %d",&a,&b);
            p=pow(a,b);
            printf("\nPower of %d raised to %d is %d",a,b,p);
            break;
        }
    case 7:
        {
            printf("\n Enter a number : ");
            scanf("%d",&a);
            p=sqrt(a);
            printf("\nSquare root of %d is %d",a,p);
            break;
        }
    case 8:
        {
          printf("\n Enter a number : ");
          scanf("%f",&t);
          result1=ceil(t);
          result2=floor(t);
          printf("\nThe ceil of %f is %f is",t,result1);
          printf("\nThe floor of %f is %f is",t,result2);
          break;
        }

    }
    return 0;
}
