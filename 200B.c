#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,sum=0;
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    printf("%Lf\n",(long double)sum/n);



    return 0;
}
