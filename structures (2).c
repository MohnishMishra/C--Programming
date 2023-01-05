#include <stdio.h>
struct
{
    char *name;
    int age;
    int salary;
}emp1,emp2;
int manager()
{
    struct
    {
        char *name;
        int age;
        int salary;
    }manager;
    manager.age=27;
    if (manager.age>30)
        manager.salary=65000;
    else
        manager.salary=55000;
    return manager.salary;
}
int main()
{
    printf("Enter the salary of employee 1: \t");
    scanf("%d",&emp1.salary);
    printf("\n Enter the salary of employee 2: \t");
    scanf("%d",&emp2.salary);
    printf("employee 1 salary is: %d \n",emp1.salary);
    printf("Employee 2 salary is: %d \n",emp2.salary);
    printf("manager salary is: %d \n",manager());
    return 0;
}


