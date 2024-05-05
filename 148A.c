#include <stdio.h>
int main()
{
    int k,l,m,n,d,i,count=0;
    scanf("%d %d %d %d %d",&k,&l,&m,&n,&d);
    int ar[d];
    for (i=1;i<=d;i++)
    {
        ar[i]=i;
    }

    for (i=1;i<=d;i++)
    {
        if (ar[i]%k==0 || ar[i]%l==0 || ar[i]%m==0 || ar[i]%n==0 )
        {
            ar[i]=0;
        }
    }
    for (i=1;i<=d;i++)
    {
        if (ar[i]!=0)
        {
            count++;
        }
    }
    printf("%d",d-count);





    return 0;
}
