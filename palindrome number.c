#include<stdio.h>
int main()
{
int a,digit,r=0;
printf("Enter the postive integer :");
scanf("%d", &a);
while (a>0)
      {
        digit = a%10;
        a=a/10;
        r=r*10+digit;
       }
    if(a==r)
        printf("%d is a palindrome number\n",a);
    else
        printf("%d is not a palindrome number\n ",a);


    return 0;
}























