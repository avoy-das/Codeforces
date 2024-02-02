#include <stdio.h>
int main()
{
    int a,b,l,r;
    scanf("%d %d",&a,&b);
    l =  (a+b-abs(a-b))/2;
    r = ((a+b)-(l*2))/2;
    printf("%d %d",l,r);
    return 0;
}
