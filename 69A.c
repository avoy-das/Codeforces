#include <stdio.h>
int main()
{
    long long int n,x,y,z,sumx=0,sumy=0,sumz=0;
    scanf("%lld",&n);
    while (n--)
    {
        scanf("%lld %lld %lld",&x,&y,&z);
        sumx+=x;
        sumy+=y;
        sumz+=z;
    }
    if ( sumx == 0 && sumy==0 && sumz==0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}
