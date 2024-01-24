#include <stdio.h>
int main()
{
    long long int n,a,b,x,y;
    scanf("%lld",&n);
    if (n%2==0)
    {
        x=n/2;
        y=n/2;
    }
    else if (n%2!=0)
    {
        x=(n-1)/2;
        y=(n+1)/2;
    }
    a=x*(x+1);
    b= -(y*y);
    printf("%lld\n",a+b);
    return 0;
}
