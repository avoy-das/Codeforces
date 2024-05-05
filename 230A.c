#include <stdio.h>
#include <string.h>
int main()
{
    int s,n,i,j,count=0;
    scanf("%d %d",&s,&n);
    int x[1000],y[1000];
    for (i=0;i<n;i++)
    {
        scanf("%d %d",&x[i],&y[i]);
    }

    int temp = 0 , temp2=0 ;
    for (i=0;i<n;i++)
    {
        for (j=i+1;j<n;j++)
        {
            if (x[i]>x[j])
            {
                temp = x[i];
                x[i] = x[j];
                x[j] = temp;

               temp = y[i];
                y[i] = y[j];
                y[j] = temp;

            }
        }
    }
    
    for (i=0;i<n;i++)
    {
        if (s>x[i])
        {
            count++;
            s=s+y[i];
        }
    }
    if (count==n)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }


    return 0;
}
