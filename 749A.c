#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d\n",n/2);
    int a=n/2;
    int b=n/2 -1;
    if (n%2==0)
    {
        while(a--)
        {
            printf("2 ");
        }
    }

    else
    {
       while(b--)
        {
            printf("2 ");
        }
        printf("3");

    }

    return 0;
}
