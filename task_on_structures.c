#include <stdio.h>
#include <string.h>
struct emp
{
    char name[30];
    char empID[20];
    int exp;
    float salary;

};
int main()
{
    int i;
    struct emp e[5];
    for(i=0;i<5;i++)
    {
        printf("\nEnter name of employee %d : ",i+1);
        scanf("%s",e[i].name);
        printf("\nEnter employee ID of employee %d : ",i+1);
        scanf("%s",&e[i].empID);
        printf("\nEnter experience of employee %d : ",i+1);
        scanf("%d",&e[i].exp);
        printf("\nEnter salary of Employee %d : ",i+1);
        scanf("%f",&e[i].salary);
    }
    for(i=0;i<5;i++)
    {
        printf("\nName of employee %d is %s" ,i+1,e[i].name);
        printf("\nEmployee ID of employee %d is %s" ,i+1,e[i].empID);
        printf("\nExperience of employee %d is %d years." ,i+1,e[i].exp);
        printf("\nSalary of employee %d is Rs %f \n" ,i+1,e[i].salary);
        printf("\n");
    }

    return 0;
}
