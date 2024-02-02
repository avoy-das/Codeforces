#include <stdio.h>
int main()
{
    int k,r,x,a;
    scanf("%d %d",&k,&r);
    for (int x=1;;x++)
    {
        a = (k*x)%10;
        if (a==r)
        {
            printf("%d",x);
            break;
        }
        else if (a==0)
        {
         printf("%d",x);
         break;
        }
    }
    return 0;
}
