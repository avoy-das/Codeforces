#include <stdio.h>
#include <string.h>
int main()
{
    char s[101],t[101],r[101];
    int i,j,n,m;
    scanf("%s %s",s,t);
    n = strlen(s);
    for(i=0,j=n-1; i<n ; i++,j--)
    {
        r[i]=s[j];
    }
    r[n]='\0';
    int x = strcmp(t,r);
    if (x==0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}
