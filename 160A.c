#include <stdio.h>
#include <math.h>

int main()
{
    int n,i,j;
    scanf("%d",&n);
    int a[n];
    for (i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }

    for (i = 0; i < n; i++)
    {
        for (j = i+1 ; j < n; j++)
        {
            if (a[i] < a[j])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    int sum = 0 ;
    int sumI = 0 ;
    for (i=0; i<n; i++)
    {
        sum+=a[i];
    }

    for (i=0; i<n; i++)
    {
        sumI+=a[i];
        if ( sumI > sum/2 )
        {
            break;
        }
    }

    printf("%d",i+1);


    return 0;
}
