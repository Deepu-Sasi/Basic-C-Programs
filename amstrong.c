/*Deepu Sasi
  Roll No : 25
  Branch  : AI&DS */
  #include<stdio.h>
  int main()
  {
      int a, i, d, sum=0, p, n=0, temp;
      printf("Enter the positive integer :");
      scanf("%d",&a);
      temp=a;
      while(temp>0)
      {
          n++;
          temp=temp/10;
      }
      temp=a;
      while(temp>0)
      {
          p=1;
          d=temp%10;
          for(i=0;i<n;i++)
            p*=d;
          sum+=p;
          temp=temp/10;
      }
      if(sum==a)
        printf("%d is an Armstrong Number",a);
      else
        printf("%d is not an Armstrong Number",a);
      return 0;
  }
