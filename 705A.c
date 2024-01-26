#include <stdio.h>
int main()
{
    int n,a;
    scanf("%d",&n);
    if (n==1) {printf("I hate it");}
    if (n==2) {printf("I hate that I love it");}
    if (n>2)
    {
        if (n%2!=0)
        {
            for (int i=0;i<(n/2);i++)
            {
                printf("I hate that I love that ");
            }
            printf("I hate it");
        }
        else if (n%2==0)
        {
            for (int j=0;j<((n/2)-1);j++)
            {
                printf("I hate that I love that ");
            }
            printf("I hate that I love it");
        }
    }
    return 0;
}
