#include <stdio.h>
int main()
{
    int n,k,l,c,d,p,nl,np,a[3],r,min;
    scanf("%d %d %d %d %d %d %d %d",&n,&k,&l,&c,&d,&p,&nl,&np);
    a[0]=(l*k)/nl;
    a[1]=c*d;
    a[2]=p/np;
    min = a[0];
    for (int i=1;i<3;i++)
    {
        if (a[i]<min)
        {
            min=a[i];
        }
    }
    printf("%d",min/n);

    return 0;
}
