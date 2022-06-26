#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int n, i,a[100];
    float sum=0,avg;
    printf("Enter  number of elemnts: \n");
    scanf("%d", &n);
    printf("Enter the elements..\n");
    for(i=0;i<n;i++)
    {
         scanf("%d",&a[i]);
         sum=sum+a[i];
   }
    avg=sum/n;
   printf("Sum=%f Average=%f\n",sum,avg);
}
