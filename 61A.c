#include <stdio.h>
#include <string.h>
int main()
{
    char x[101],y[101];
    scanf("%s %s",x,y);
    int n = strlen(x);
    for (int i=0;i<n;i++)
    {
        if (x[i]!=y[i])
        {
            printf("1");
        }
        else if (x[i]==y[i])
        {
            printf("0");
        }
    }
    return 0;
}
