#include <stdio.h>
int main()
{
    int n,i,an=0,d=0;
    scanf("%d",&n);
    char a[n];
    for (i=0;i<=n;i++)
    {
        scanf("%c",&a[i]);
        if (a[i]=='A')
        {
            an++;
        }
        else if (a[i]=='D')
        {
            d++;
        }
    }
    if (an>d)
    {
        printf("Anton");
    }
    else if (d>an)
    {
        printf("Danik");
    }
    else {printf("Friendship");}

    return 0;
}
