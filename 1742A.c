#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    while (n--)
    {
        int a,b,c;
        scanf("%d %d %d",&a,&b,&c);
        if (a+b==c || b+c==a || c+a==b)
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
