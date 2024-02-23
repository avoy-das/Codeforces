#include <stdio.h>

int same(int x)
{
    int sum = 0;
    while (x>0)
    {
        int rem = x%10;
        sum+=rem;
        x/=10;
    }
    return sum;
}
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n,a,b,p,q;
        scanf("%d",&n);
        a=n/1000;
        b=n%1000;
        p=same(a);
        q=same(b);
        if (p==q)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}
