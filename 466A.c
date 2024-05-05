#include <stdio.h>
int main()
{
    int n,m,a,b,r;
    scanf("%d %d %d %d",&n,&m,&a,&b);

    if ( m*a >= b)
    {
        if (n%m * a > b )
        {
            r = (n/m)*b + b;
        }
        else
        {
            r = (n/m)*b + (n%m)*a;
        }
    }
    else
    {
        r = n*a;
    }

    printf("%d",r);



    return 0;
}
