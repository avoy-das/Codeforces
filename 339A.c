#include <stdio.h>
#include <string.h>
int main()
{
    char a[500];
    scanf("%s",a);
    int i,c1=0,c2=0,c3=0,j,k,l,r;
    for (i=0; i<strlen(a); i++)
    {
        if (a[i]=='1')
        {
            c1++;
        }
        if (a[i]=='2')
        {
            c2++;
        }
        if (a[i]=='3')
        {
            c3++;
        }
    }

     for (i=0;i<c1;i++)
     {
         a[i]='1';
     }
     for (i=c1;i<(c1+c2);i++)
     {
         a[i]='2';
     }

     for (i=c1+c2;i<(c1+c2+c3);i++)
     {
         a[i]='3';
     }


    for (i=0; i<(c1+c2+c3)-1; i++)
    {
        printf("%c+",a[i]);
    }

    printf("%c",a[c1+c2+c3-1]);



    return 0;
}
