#include <stdio.h>
int main()
{
    long long int n,rem,c=0;
    scanf("%lld",&n);
    while (n!=0)
    {
        rem=n%10;
        n/=10;
        if ((rem == 4 || rem == 7))
        {
            c++;
        }
    }
    if (c==4 || c==7)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}
