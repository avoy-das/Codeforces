#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n,h,m,r;
        scanf("%d:%d",&h,&m);

        r = h;

        if (h>=13 && h<=23)
        {
            h=h-12;
        }

        if (h>=1 && h<=9)
        {
            printf("0%d:",h);

            if (m>=10 && m<=59)
            {
                printf("%d ",m);
            }

            else if (m>=1 && m<=9)
            {
                printf("0%d ",m);
            }
            else if (m==0)
            {
                printf("00 ");
            }
        }

        if (h>=10 && h<=11)
        {
            printf("%d:",h);
            if (m>=10 && m<=59)
            {
                printf("%d ",m);
            }

            else if (m>=1 && m<=9)
            {
                printf("0%d ",m);
            }
            else if (m==0)
            {
                printf("00 ");
            }
        }

        if ( h==12 )
        {
            printf("%d:",h);
            if (m>=10 && m<=59)
            {
                printf("%d ",m);
            }
            else if (m>=1 && m<=9)
            {
                printf("0%d ",m);
            }
            else if (m==0)
            {
                printf("00 ");
            }
        }

       if ( h==0 )
        {
            printf("12:");

            if (m>=10 && m<=59)
            {
                printf("%d ",m);
            }

            else if (m>=1 && m<=9)
            {
                printf("0%d ",m);
            }
            else if (m==0)
            {
                printf("00 ");
            }
        }

        if (r>=12 && r<=23)
        {
            printf("PM\n");
            continue;
        }

        if (h>=0 && h<=11)
        {
            printf("AM\n");
            continue;
        }





    }
    return 0;
}
