/*Deepu Sasi
  Roll No : 25
  Branch  : AI&DS */
#include<stdio.h>
int main()
{
    int a, b, c, largest;
    printf("Enter the three integer numbers:");
    scanf("%d %d %d",&a, &b, &c);
    if(a>b)
        largest = a;
    else if (b>a)
        largest =b;
    if(largest<c)
        largest = c;
    printf("Largest number = %d", largest);
    return 0;
}
