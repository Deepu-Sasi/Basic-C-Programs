/* Deepu Sasi
   Roll No : 25
   Branch  : AI&DS */

#include <stdio.h>
int fact(int);
void main()
{
 int a,factorial;

  	printf("Enter the value of a :");
  	scanf("%d",&a);
  	factorial=fact(a);
    printf("Factorial of the num(%d) = %d\n",a,factorial);

}

int fact(int b)
{
    int i,f=1;
    for(i=1;i<=b;i++)
    {
        f=f*i;
    }
    return f;
}
