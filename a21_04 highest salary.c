//function to find the highest salary employee from a given array of 10 employees.

#include<stdio.h>
#include<conio.h>
#include<string.h>

struct employee
{
    int empid;
    char name[25];
    int salary;
};

int maxSalary(struct employee [], int);
struct employee input();
int main()
{
    int i, m;
    struct employee e[5];
    for(i=0; i<5; i++)
        e[i]=input();
    printf("\n");
    m=maxSalary(e, 5);
    printf("%d\n",m);
    printf("%s has the maximum salary of %d", e[m].name, e[m].salary);

}

struct employee input()
{
    struct employee p;
    printf("Enter the Id, Name and salary of the employee.\n");
    printf("Id- ");
    scanf("%d",&p.empid);
    printf("Name- ");
    fflush(stdin);
    fgets(p.name, 25, stdin);
    p.name[strlen(p.name)-1]='\0';
    printf("Salary- ");
    scanf("%d",&p.salary);
    return p;
}

int maxSalary(struct employee p[], int x)
{
    int i,j,k;
    j=p[0].salary;
    for(i=1; i<x; i++)
        if(j<p[i].salary)
        {
            j=p[i].salary;
            k=i;
        }
    return k;
}
