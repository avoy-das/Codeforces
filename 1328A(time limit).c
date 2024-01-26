#include <stdio.h>
int main()
{
    int n;
    long long int a,b,x;
    scanf("%d",&n);
    while (n--)
    {
        scanf("%lld %lld",&a,&b);
        x=a;
        while(a%b!=0)
        {
            a++;
        }
        printf("%lld\n",a-x);
    }
    return 0;
}
