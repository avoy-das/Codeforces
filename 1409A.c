#include <stdio.h>
#include <math.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int a,b,r;
        scanf("%d %d",&a,&b);
        r=abs(a-b);
        if (r%10==0)
        {
            printf("%d\n",r/10);
        }
        else
        {
            printf("%d\n",r/10 +1 );
        }

    }
    return 0;
}
