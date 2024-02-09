#include <stdio.h>
#include <string.h>
int main()
{
    char s[1000];
    int i,count=0,repeat[256]={0};
    fgets(s, sizeof(s), stdin);
    for (i=0;i<strlen(s);i++)
    {
        if ( s[i]>='a' && s[i]<='z' && repeat[s[i]]==0)
        {
            count++;
            repeat[s[i]]=1;
        }
    }
    printf("%d",count);

    return 0;
}
