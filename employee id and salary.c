/*Deepu Sasi
  Roll No : 25
  Branch  : AI&DS */
#include<stdio.h>
#include<string.h>
struct employee
{
  char name[30];
  int emp_id,salary;
};
void main()
{
struct employee emp[20];
int n,i;
printf("Enter the number of employeed in your organization(<=20):");
scanf("%d",&n);
for(i=0;i<n;i++)
{
   printf("\nEnter Person %d\n Name :",i+1);
   scanf("%s",&emp[i].name);
   printf("\nEmployee Id :");
   scanf("%d",&emp[i].emp_id);
   printf("\nEmployee Salary :");
   scanf("%d",&emp[i].salary);
}
printf("\nEmployees Information\n");
for(i=0;i<n;i++)
{
   printf("\nPerson %d\n Name : %s",i+1,emp[i].name);
   printf("\nEmployee Id : %d",emp[i].emp_id);
   printf("\nEmployee Salary : %d",emp[i].salary);
}
return 0;
}
