#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a,b,c;
        scanf("%d %d %d",&a,&b,&c);
        if (b>a && b<c)
        {
            printf("STAIR\n");
            continue;
        }
        else if (b>a && b>c)
        {
            printf("PEAK\n");
            continue;
        }
        else
        {
            printf("NONE\n");
        }

    }

}
