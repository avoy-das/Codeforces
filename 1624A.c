#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n,i,a[51];
        scanf("%d",&n);
        for(i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
        }
        int max = a[0];
        int min = a[0];
        for (i=1; i<n; i++)
        {
            if (a[i]>max)
            {
                max=a[i];
            }
            else if (a[i]<min)
            {
                min=a[i];
            }
        }
        printf("%d\n",max-min);
    }
    return 0;
}
