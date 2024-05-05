#include<stdio.h>
#include <string.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,a,b,r;
        scanf("%d %d %d",&n,&a,&b);
        if (2*a>b)
        {
            r = (n/2) * b + (n%2)*a;
        }
        else if (2*a<=b)
        {
            r = n*a;
        }
        printf("%d\n",r);
        
    }
    return 0;
}

