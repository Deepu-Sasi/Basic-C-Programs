#include<stdio.h>
int main()
{
    int a[10][10],i,j,m,n,s;
    do
    {
    printf("Enter the number of rows and columns of the sparse matrix\n");
    scanf("%d %d", &m,&n);
    printf("Enter the elements of the sparse matrix\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    }
    printf("The elements are\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {

        printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("The non zero elements of the sparse matrix are\n");
    for(i=0;i<m;i++)
    {

        for(j=0;j<n;j++)
            if(a[i][j]!=0)
                printf("%d\n",a[i][j]);
    }
    printf("Enter 1 to repeat or 0 stop\n");
    scanf("%d",&s);
    }
    while(s==1);

}
