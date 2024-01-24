#include <stdio.h>
int main()
{
    int a,b,c,d,i,count =0;
    scanf("%d %d",&a,&b);

    for (i=1;;i++)
    {
        c = a*pow(3,i);
        d = b*pow(2,i);
        if (c <= d)
        {
            count++;
        }
        else if (c > d)
        {
            break;
        }


    }
    printf("%d\n",count+1);



    return 0;
}
