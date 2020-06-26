#include <stdio.h>

struct employee
{
char    empname[30];
int     empno;
char    departmentname[20];
float   salary;
};
int main()
{
 int j;
 struct employee e;
 printf("Enter employee detail \n");
 printf("employee name :-\t");
 scanf("%s",&e.empname);
 printf("employee no. :-\t");
 scanf("%d", &e.empno);
 printf("employee department name :-\t");
 scanf("%s", &e.departmentname);
 printf("employee salary :-\t");
 scanf("%f", &e.salary);
 printf("\n\n");
  
 printf("\n Entered details is:");
 printf("employee name: %s",e.empname);
 printf("employee no. : %d",e.empno);
 printf("employee department name: %s",e.departmentname);
 printf("employee salary: %f",e.salary);
 return 0;
 }
