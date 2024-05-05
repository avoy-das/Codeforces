#include<stdio.h>
#include <string.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int array1[1000];
    for (i=1; i<=n; i++)
    {
        array1[i]=i;
    }
    int p;
    scanf("%d",&p);
    int array2[1000];
    for (i=1; i<=p; i++)
    {
        scanf("%d",&array2[i]);
    }
    int q;
    scanf("%d",&q);
    for (i=p+1; i<=(p+q); i++)
    {
        scanf("%d",&array2[i]);
    }
    int count=0;


   
    for (i=1; i<=n; i++)
    {
        for ( int j=1; j<=(p+q); j++)
        {
            if (array2[j]==i)
            {
                count++;
                array2[j]=0;
                break;
            }
        }
    }

   
    if (count==n)
    {
        printf("I become the guy.\n");
    }
    else
    {
        printf("Oh, my keyboard!\n");
    }

    return 0;
}

