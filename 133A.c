#include <stdio.h>
#include <string.h>
int main()
{
    char a[1000];
    fgets(a,sizeof(a),stdin);
int count =0;
    for (int i=0;i<strlen(a);i++)
    {
        if (a[i]=='H' || a[i]=='Q'|| a[i]=='9' )
        {
            count ++ ;
        }
    }
    if (count>0)
    {
        printf("YES");
    }
    else printf("NO");


    return 0;
}
