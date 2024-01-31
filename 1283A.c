#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    while(n--)
    {
        int h,m;
        scanf("%d %d",&h,&m);
        int  total = h*60+m;
        printf("%d\n",1440-total);
    }


    return 0;
}
