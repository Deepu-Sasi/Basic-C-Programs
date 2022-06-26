/* Deepu Sasi
   Roll No : 25
   Branch  : AI&DS */

#include <stdio.h>
#include <string.h>
char reversestr(char str[])
{ int i,n;
  char c;
  n=strlen(str);
  for(i=0;i<n/2;i++)
    {   c=str[i];
         str[i]=str[n-1-i];
         str[n-1-i]=c;
     }
}
int main()
{
  char str[100];
  system(" ");
  printf("Enter the string :");
  scanf("%[^\n]",str);
  reversestr(str);
  printf("Reversed string is=%s",str);
}

