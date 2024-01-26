#include <stdio.h>
int main()
{
    int i;
    scanf("%d",&i);
    while (i--)
    {int a,b;
    scanf("%d %d",&a,&b);
    if (a%b==0)
    {
        printf("0\n");
    }
    else {int n = a/b;
    int x = (n+1)*b-a;
    printf("%d\n",x);}}

    return 0;
}
