#include <stdio.h>

int main()
{
    int t,i,j;
    scanf("%d",&t);
    int arr[10000];
    j=1;
    for (i=1; j < 1001  ; i++)
    {
        if ( (i%3!=0) && (i%10!=3) )
        {
            arr[j]=i;
            j++;
        }
    }


    while (t--)
    {
        int k;
        scanf("%d",&k);
        printf("%d\n",arr[k]);

    }
    return 0;
}
