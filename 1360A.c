#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int a,b,temp,c,d;
        scanf("%d %d",&a,&b);
        if (a<b)
        {
            temp = a;
            a = b;
            b = temp;
        }
        c = 2*a;
        d = 2*b;
        if (a>=d)
        {
            printf("%d\n",a*a);
        }
        else
        {
            printf("%d\n",d*d);
        }

    }

    return 0;
}
