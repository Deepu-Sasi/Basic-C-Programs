/*Deepu Sasi
  Roll No : 25
  Branch  : AI&DS */

#include <stdio.h>
int main()
{
    int a[100];
    int n, i;
    int * p = a;
    printf("Enter size of array : ");
    scanf("%d", &n);

    printf("Enter elements in array:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", (p + i));
    }

    printf("Array elements: \n");
    for (i = 0; i < n; i++)
    {
        printf("%d\n", *(p + i));
    }
    return 0;
  }
