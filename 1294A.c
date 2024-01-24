#include <stdio.h>
int main()
{
    int i,j;
    scanf("%d",&j);
    for (i=1; i<=j; i++)
    {
        int n,a,b,c,sum;
        scanf ("%d %d %d %d",&a,&b,&c,&n);
        sum = n+a+b+c;
        if(sum%3!=0 || sum/3<a || sum/3<b || sum/3<c)
            printf("NO\n");
        else printf("YES\n");


    }

    return 0;
}
