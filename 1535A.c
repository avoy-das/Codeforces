#include <stdio.h>
int main()
{
    int n,max,i,a[4],max2;
    scanf("%d",&n);
    while (n--)
    {
        for (i=0; i<4; i++)
        {
            scanf("%d",&a[i]);
        }
        max = max2 = a[0];
        for (i=0; i<4; i++)
        {
            if (a[i]>max)
            {
                max2 = max ;
                max = a[i];
            }
            else if (a[i] > max2 && a[i]<max)
            {
                max2 = a[i];
            }
            else if (max == max2)
            {
                max2 = a[i];
            }
        }

        if ( ((max==a[0] || max==a[1]) && (max2==a[2] || max2==a[3])) || ((max==a[2] || max==a[3]) && (max2==a[0] || max2==a[1])) )
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}
