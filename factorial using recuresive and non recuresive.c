/* Deepu Sasi
   Roll No : 25
   Branch  : AI&DS */

#include<stdio.h>
long fact(int);
    int main()
    {
        int n;
        printf("Enter the value of n :");
        scanf("%d", &n);
        printf("Factorial of %d = %ld", n, fact(n));
        return 0;
    }
    long fact(int n)
    {
        if(n<=1)
            return 1;
        else
            return n*fact(n-1);

    }
