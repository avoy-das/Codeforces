#include <stdio.h>
int main()
{
    int n,m,i,j;
    scanf("%d %d",&n,&m);
    char a[n][m];
    for (i=0;i<n;i++)
    {
        for (j=0;j<m;j++)
        {
            scanf(" %c",&a[i][j]);
            if (a[i][j]=='C' || a[i][j]=='M' ||a[i][j]=='Y')
            {
                printf("#Color");
                return 0;
            }
        }
    }
    printf("#Black&White");

    return 0;
}
