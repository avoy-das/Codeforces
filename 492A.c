#include <stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int sum=0,sum2=0,count=0;
    for (i=1;;i++)
    {
        sum2+=(sum+=i);
        if (sum2>n)
        {
            break;
        }
        count++;
    }
    printf("%d",count);
    return 0;
}
