#include <stdio.h>
int main()
{
    int a[4],i,temp;
    for (i=0;i<4;i++)
    {
        scanf("%d",&a[i]);
    }
    int max = a[0],index = 0;
    for (i=1;i<4;i++)
    {
        if (a[i]>max)
        {
            max = a[i];
            index = i;
        }
    }
    temp = a[0];
    a[0] = a[index];
    a[index] = temp;
printf("%d %d %d",a[0]-a[1],a[0]-a[2],a[0]-a[3]);


    return 0;
}
