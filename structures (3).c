#include <stdio.h>
struct employee
{
    char *name;
    int age;
    int salary;
};
int manager()
{
    struct employee manager;
    manager.age=27;
    if (manager.age=30)
        manager.salary=65000;
    else
        manager.salary=55000;
    return manager.salary;
}
int main()
{
    struct employee emp1;
    struct employee emp2;
    printf("\n enter the salary of employee 1: ");
    scanf("%d",&emp1.salary);
    printf("\n enter the salary of employee 2: ");
    scanf("%d", &emp2.salary);
    printf("\n employee 1 salary is: %d \t",emp1.salary);
    printf("\n employee 2 salary is: %d \t",emp2.salary);
    printf("\n manager salary is: %d",manager());
    return 0;
}

