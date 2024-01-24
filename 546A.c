#include <stdio.h>
int main()
{
    int k,n,w,i,sum=0;
    scanf("%d %d %d",&k,&n,&w);

    for (i=1;i<=w;i++)
    {
        sum+=(k*i);

    }
    if (sum>n)
   {printf("%d\n",sum-n);}
   else {printf("0");}

    return 0;
}
