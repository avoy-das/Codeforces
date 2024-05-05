#include <stdio.h>
#include <string.h>
void toadjust(char caps[])
{
    if ( caps[0]>='a' && caps[0]<='z')
    {
        caps[0]=caps[0]-32;
    }
    int j;
    for (j=1; j<strlen(caps); j++)
    {
        if ( caps[j]>='A' && caps[j]<='Z')
        {
            caps[j]=caps[j]+32;
        }
    }
    printf("%s",caps);
}
void toadjust2(char caps[])
{
    for (int j=0; j<strlen(caps); j++)
    {
        if ( caps[j]>='A' && caps[j]<='Z')
        {
            caps[j]=caps[j]+32;
        }
    }
    printf("%s",caps);
}
int main()
{
    char a[101];
    scanf("%s",a);
    int i,count=0;
    for (i=0; i<strlen(a); i++)
    {
        if ( a[i]>='A' && a[i]<='Z')
        {
            count++;
        }
    }

    if ( count==strlen(a) )
    {
        toadjust2(a);
        return 0;
    }
    else if (( count == (strlen(a)-1) && ( a[0]>='a' && a[0]<='z') ))
    {
        toadjust(a);
        return 0;
    }
    else
    {
        printf("%s",a);
    }
    return 0;
}

