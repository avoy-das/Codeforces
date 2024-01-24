#include<stdio.h>
int main()

{

    int n;
    scanf("%d",&n);
    if (n%2 || n==2 || n<1 )
    {
        printf("NO\n");
    }
    else if (n%2==0 && n!=2)
    {
        printf("YES\n");
    }

}
