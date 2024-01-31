#include <stdio.h>
int main()
{
    int n,k,min,sum,count,i;
    scanf("%d %d",&n,&k);
    min = 240-k;
    sum = 0;
    count = 0;
    for (i=1;i<=n;i++)
    {
        sum+=(i*5);
        if (sum<=min)
        {
            count++;
        }
    }
    printf("%d",count);
    return 0;
}
