//function to take input employee data from the user.

#include<stdio.h>
#include<conio.h>
#include<string.h>



struct employee
{
    int empid;
    char name[25];
    int salary;
};

void input(struct employee *, int);
int main()
{
    int i;
    struct employee e[5];
    input(e, 5);
    printf("\n");
    for(i=0; i<5; i++)
        printf("%d %s %d\n", e[i].empid, e[i].name, e[i].salary);
}

void input(struct employee *p, int x)
{
    int i;

    for(i=0; i<x; i++)
    {
        printf("%d- Enter the Id, Name and salary of the employee.\n",i+1);
        printf("Id- ");
        scanf("%d",&(p+i)->empid);
        printf("Name- ");
        fflush(stdin);
        fgets((p+i)->name, 25, stdin);
        (p+i)->name[strlen((p+i)->name)-1]='\0';
        printf("Salary- ");
        scanf("%d",&(p+i)->salary);
    }
}
