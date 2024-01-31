#include <stdio.h>
int main()
{
    int i;
    scanf("%d",&i);
    while(i--)
    {
        int n;
        scanf("%d",&n);
        if (n%2==0)
        {
            printf("%d\n",(n/2)-1);
        }
        else
        {
            printf("%d\n",(n-1)/2);
        }
    }
    return 0;
}
