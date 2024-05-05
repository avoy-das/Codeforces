#include <stdio.h>
#include <string.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)

    {
        int n,x,y,i;
        scanf(" %d ",&n);
        char a[20];
        fgets(a,sizeof(a),stdin);

        for (i=0;i<strlen(a);i++)
        {
            if (a[i]=='B')
            {
                x=i;
                break;
            }
        }

        for (i=strlen(a)-1;i>=0;i--)
        {
            if (a[i]=='B')
            {
                y=i;
                break;
            }
        }

        printf("%d\n",y-x+1);



    }

    return 0;
}
