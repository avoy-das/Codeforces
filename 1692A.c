#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    while (n--)
    {
        int a[4],count=0;
        for (int i=0;i<4;i++)
        {
            scanf("%d",&a[i]);
        }
        for (int i=1;i<4;i++)
        {
            if (a[i]>a[0])
            {
                count++;
            }
        }
        printf("%d\n",count);

    }

    return 0;
}
