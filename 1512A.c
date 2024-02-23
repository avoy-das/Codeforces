#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n;
        scanf("%d",&n);
        int a[n+3];
        for (int i=1;i<(n+1);i++)
        {
            scanf("%d",&a[i]);
        }

        for (int i=1;i<(n+1);i++)
        {
            if (a[i]!=0 && a[i]!=a[i-1] && a[i]!=a[i+1] && a[i]!=a[i+2])
            {
                printf("%d\n",i);
                break;
            }
        }

    }




    return 0;
}
