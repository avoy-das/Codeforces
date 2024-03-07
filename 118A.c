#include <stdio.h>
#include <string.h>
int main()
{
    char a[302];
    scanf("%s",a);
    int i;
    for (i=0;i<strlen(a);i++)
    {
        if (a[i]>='A' && a[i]<='Z')
        {
            a[i]=a[i]+32;
        }
    }
    for (i=0;i<strlen(a);i++)
    {

        if (a[i] !='a' && a[i] !='e' && a[i]!='i' && a[i]!='o' && a[i]!='u' && a[i]!='y')
        {
            printf(".%c",a[i]);
        }
    }

    return 0;
}
