#include<stdio.h>
int main()

{
    int i,n,sum=0,a;
    scanf("%d",&n);
    for (i=1; i<=n; i++)
    {
        scanf("%d",&a);
        sum+=a;
    }
    if (sum>0)
    {
        printf("HARD\n");
    }
    else
    {
        printf("EASY\n");
    }

    return 0;
}
