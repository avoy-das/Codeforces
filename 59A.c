#include <stdio.h>
#include <string.h>
int main()
{
    char t[100];

    scanf("%s",t);
    int n=strlen(t),u=0,l=0;
    for (int i=0;i<n;i++)
    {
        if ( t[i]>='A' && t[i]<='Z' )
        {
            u++;
        }
        else if (t[i]>='a' && t[i]<='z')
        {
            l++;
        }
    }

    if ( l>u || l==u)
    {
        for (int j=0;j<n;j++)
        {
            if ( t[j]>='A' && t[j]<='Z' )
            {
                t[j]=t[j]+32;
            }
        }
    }
    else if (u>l)
    {
        for (int k=0;k<n;k++)
        {
            if ( t[k]>='a' && t[k]<='z' )
            {
                t[k]=t[k]-32;
            }
        }
    }
    printf("%s",t);



    return 0;
}
