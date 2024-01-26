#include <stdio.h>
int main()
{
    int n,c,rem;
    scanf("%d %d",&n,&c);
    while(c--)
    {
        rem = n%10;
        if (rem==0)
        {
            n/=10;
        }
        else if (rem>0)
        {
            n--;
        }
    }
    printf("%d",n);

    return 0;
}
