#include <stdio.h>
#include <string.h>

int main()
{
    int n,i,even=0,odd=0;
    scanf("%d",&n);
    int a[n];
    for (i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
        if (a[i]%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }

    if (even>odd)
    {
        for (i=0; i<n; i++)
        {
            if (a[i]%2!=0)
            {
                printf("%d",i+1);
                return 0;
            }
        }
    }
    else if (odd>even)
    {
        for (i=0; i<n; i++)
        {
            if (a[i]%2==0)
            {
                printf("%d",i+1);
                return 0;
            }
        }
    }


        return 0;
    }

