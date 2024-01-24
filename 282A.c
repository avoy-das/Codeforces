#include <stdio.h>
#include <string.h>
int main()
{
    int i,n;
    scanf("%d",&n);
int x=0;
    while(n--)
    {
        char a[4];
        scanf("%s",a);
        if ( strcmp(a,"X++")==0 || strcmp(a,"++X")==0 )
        {
            x++;
        }
        else if ( strcmp(a,"X--")==0 || strcmp(a,"--X")==0 )
        {
            x--;
        }
    }
    printf("%d\n",x);


    return 0;
}
