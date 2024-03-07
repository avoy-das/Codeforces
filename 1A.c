#include <stdio.h>
int main()
{
    long long int n,m,k,n1,m1,r;
    scanf("%lld %lld %lld",&n,&m,&k);
    if (n%k!=0)
    {
        n1 = (n/k + 1);
    }
    else
    {
        n1=n/k;
    }
    if (m%k!=0)
    {
        m1 = (m/k + 1);
    }
    else
    {
        m1=m/k;
    }

    r = n1*m1;
    printf("%lld",r);
    return 0;
}
