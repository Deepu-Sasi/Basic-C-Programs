/*Deepu Sasi
  Roll No : 25
  Branch  : AI&DS */
#include <stdio.h>
int swap(int *apoint, int *bpoint)
{
    int temp = *apoint;
    *apoint = *bpoint;
    *bpoint = temp;
}
int main()
{
    int a, b;
    printf("Enter value of a : ");
    scanf("%d", &a);
    printf("Enter value of b : ");
    scanf("%d", &b);
    swap(&a, &b);
    printf("After swapping, a = %d & b = %d", a, b);
    return 0;
}
