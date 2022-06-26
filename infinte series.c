/*Deepu Sasi
  Roll No : 25
  Branch  : AI&DS */
#include<stdio.h>
#include<math.h>
int main ()
{

    int n;
    float x, factor, term, fx=0, oldf;
    printf("Enter the value of x: ");
    scanf("%f",&x);
    fx=term=x;
    for (n=1;n<=50;n++)
    {
        factor=(x/n);
        term*=factor;
        oldf=fx;
        fx+=term;
        if((fabs(fx-oldf))<=0.000001)
            break;


    }
    if (n>20)
        printf("No convergent solution obtained after 20 iterations");
    else
        printf("After %d iterations, converged solution= %f ", n+1, fx/2);
    return 0;
}
