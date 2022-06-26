/*Deepu Sasi
  Roll No : 25
  Branch : AI&DS */

  #include<stdio.h>
  #include<string.h>
  int main()
  {
      char a[100],b[100],c[100];
      int i, j ;
      printf("Enter the First String :");
      gets(a);
      printf("Enter the Second String :");
      gets(b);
      for(i=0; a[i]!='$';i++)
        c[i]=a[i];
      c[i]=' ';
      for (j=0; b[j]!='$'; j++)
        c[i+j+1]=b[j];
      c[i+j+1]='\0';
      printf("The string concatenated :");
      puts(c);
      return 0;
  }
