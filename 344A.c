#include <stdio.h>
int main()
{
    int n,i,count=0;
    scanf("%d",&n);
    int a[n];
    for (i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
        if (a[i]!=a[i-1])
        {
            count++;
        }
    }
    printf("%d\n",count);

    return 0;
}
