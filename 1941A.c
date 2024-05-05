#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n,m,k,i,j;
        scanf("%d %d %d",&n,&m,&k);
        int left[1001],right[1001];
        int count = 0;
        for (i=0;i<n;i++)
        {
            scanf("%d",&left[i]);
        }
        for (j=0;j<m;j++)
        {
            scanf("%d",&right[j]);
        }

        for (i=0;i<n;i++)
        {
            for (j=0;j<m;j++)
            {
                if (left[i]+right[j]<=k)
                {
                    count++;
                }
            }
        }

        printf("%d\n",count);
    }

 return 0;
}
