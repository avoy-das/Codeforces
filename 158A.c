#include <stdio.h>
int main()
{
    int n,k,i;
    scanf("%d %d",&n,&k);
    int a[n],count = 0;
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int x=a[k-1];
    for (i=0;i<n;i++)
    {
        if (a[i]>=x && a[i]>0)
        {
            count++;
        }
    }
    printf("%d",count);

return 0;
}
