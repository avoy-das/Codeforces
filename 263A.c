#include <stdio.h>
int main()
{
    int M[5][5],i,j,x;
    for (i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            scanf("%d",&M[i][j]);
            if (M[i][j]==1)
            {
                x=abs(2-i)+abs(2-j);
            }
        }
    }
    printf("%d\n",x);



    return 0;
}
