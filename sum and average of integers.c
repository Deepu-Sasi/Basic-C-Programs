/*Deepu Sasi
  Roll No: 25
  Branch : AI&DS */

  #include<stdio.h>

int main()
{
 float a[100], sum=0, avg;
 int i, n;

 printf("Enter the number of Array : ");
 scanf("%d", &n);
 printf("Enter numbers :");
 for(i=0; i< n; i++)
 {
  printf("a[%d] = ", i);
  scanf("%f", &a[i]);
 }
 for(i=0; i< n; i++)
 {
  sum = sum + a[i];
 }
 avg = sum/n;
 printf("Sum is %f\n", sum);
 printf("Average is %f", avg);

 return 0;
}
