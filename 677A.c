#include <stdio.h>
int main()
{
    int n,h;
    scanf("%d %d",&n,&h);
    int a[n];
    for (int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
int c1=0,c2=0;
for (int i=0;i<n;i++)
{
    if (a[i]>h)
    {
        c2+=2;
    }
    else
        c1++;
}
int sum = c1+c2;
printf("%d",sum);



    return 0;
}
