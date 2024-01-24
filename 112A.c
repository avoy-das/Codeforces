#include <stdio.h>
#include <string.h>
int main()
{
    char t1[101],t2[101];

    scanf("%s",t1);
    scanf("%s",t2);
    int a=strlen(t1);
    int b=strlen(t2);
    for (int i=0;i<a;i++)
    {
        if ( t1[i]>='A' && t1[i]<='Z')
        {
            t1[i]=97+(t1[i]-65);
        }
    }
    for (int i=0;i<b;i++)
    {
        if ( t2[i]>='A' && t2[i]<='Z')
        {
            t2[i]=97+(t2[i]-65);
        }
    }


    int x = strcmp(t1,t2);
    printf("%d",x);
    return 0;
}
