/*Deepu Sasi
  Roll No : 25
  Branch : AI&DS */

  #include<stdio.h>
  #include<string.h>
  int main()
  {
      int len, i, flag=0;
      char a[100];
      printf("Enter the String :");
      gets(a);
      len=strlen(a);
      for (i=0; i<len; i++)
      {
          if(a[i]!=a[len-i-1])
            {flag=1;
             break;
            }
      }
      if(flag==0)
        printf("%s is a palindrome word",a);
      else
        printf("%s is not a palindrome word",a);

      return 0;

  }
