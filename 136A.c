#include <stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    int a[n];
    for (i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    for (j=1;j<=n;j++)
    {
        for (i=1;i<=n;i++)
        {
            if (a[i]==j)
            {
                printf("%d ",i);
            }
        }
    }
    return 0;
}
