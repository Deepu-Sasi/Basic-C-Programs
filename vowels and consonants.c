/*Deepu Sasi
  Roll No : 25
  Branch : AI&DS */

  #include<stdio.h>
  #include<string.h>
  int main()
  {
      char a[100];
      int i=0, v=0, c=0, s=0;
      printf("Enter the string :");
      gets(a);
      while (a[i]!='$')
      {
          if((a[i]>=65 && a[i]<=90)|| (a[i]>=97 && a[i]<=122))
          {
              if(a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U'||a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
                v++;
              else
                c++;
          }
          if (a[i]==' ')
          {
              s++;
          }
          i++;
          }
      printf("Number of Vowels = %d\n " ,v);
      printf("Number of Consonants = %d\n" ,c);
      printf("Number of Spaces = %d\n" ,s);
      return 0;
  }
