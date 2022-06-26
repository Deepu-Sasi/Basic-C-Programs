/*Deepu Sasi
  Roll No : 25
  Branch  : AI&DS */

#include <stdio.h>
int main()
    {
       int first_number, second_number, *a, *b, sum;
       printf("Enter the numbers:");
       scanf("%d%d", &first_number, &second_number);
       a = &first_number;
       b = &second_number;
       sum = *a + *b;
       printf("Sum is %d\n", sum);
     }
