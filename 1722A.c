#include <stdio.h>
#include <string.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
       char a[100];
       int n,i,sT=0,si=0,sm=0,su=0,sr=0,extra=0;
       scanf("%d",&n);
       scanf("%s",a);
       for (i=0;i<strlen(a);i++)
       {
           if (a[i]=='T')
           {
               sT++;
           }
           else if (a[i]=='i')
           {
               si++;
           }
           else if (a[i]=='m')
           {
               sm++;
           }
           else if (a[i]=='u')
           {
               su++;
           }
           else if (a[i]=='r')
           {
               sr++;
           }
           else if (a[i]!='T' || a[i]!='i' || a[i]!='m' || a[i]!='u' || a[i]!='r')
           {
               extra++;
           }
       }



       if (sT==1 && si==1 && sm==1 && su==1 && sr==1 && extra==0)
       {
           printf("YES\n");
       }
       else
       {
           printf("NO\n");
       }


    }
    return 0;
}
