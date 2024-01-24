#include<stdio.h>
int main()

{

    int i,n,count=0;
    scanf("%d",&n);
    for (i=1; i<=n; i++)
    {
        int a,b,c,d;
        scanf("%d %d %d",&a,&b,&c);
        d=a+b+c;
        if (d>=2)
        {
            count++;
        }

    }

    printf("%d\n",count);


}
