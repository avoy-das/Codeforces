#include <stdio.h>
int main()
{
    int n,a,b,c;
    scanf("%d",&n);
    while (n--)
    {
        scanf("%d%d%d",&a,&b,&c);
        if ( ((a+b)>=10) || ((c+b)>=10) || ((a+c)>=10) )
        {
            printf("YES\n");
        }
        else {printf("NO\n");}
    }
    return 0;
}
