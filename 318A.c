#include <stdio.h>
int main()
{
    long long int n,k,r;
    scanf("%lld %lld",&n,&k);

    if ( k <= (n+1)/2 )
    {
        r=k*2-1;
    }
    else
    {
        if (n%2==0)
        {
            r=(k-n/2)*2;
        }
        else
        {
        r = (k- (n+1)/2)*2;
        }
    }

        printf("%lld",r);

    return 0;
}
