#include <stdio.h>
int main()
{
    int a[3],i,j,temp,r;
    scanf("%d %d %d",&a[0],&a[1],&a[2]);
    for (i=0;i<3;i++)
    {
        for (j=i+1;j<3;j++)
        {
            if (a[j]>a[i])
            {
                temp = a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    r = abs(a[1]-a[0])+abs(a[1]-a[2]);
    printf("%d",r);
    return 0;
}
