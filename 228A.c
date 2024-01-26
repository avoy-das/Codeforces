#include <stdio.h>
int main()
{
    int a[5],temp;
    for (int i=0; i<4; i++)
    {
        scanf("%d",&a[i]);
    }
    for (int i=0; i<4; i++)
    {
        for (int j=0; j<4; j++)
        {
            if (a[j]<a[j+1])
            {
                temp = a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    int c = 0;
    for (int i=0; i<4; i++)
    {
        if (a[i]==a[i+1])
        {
            c++;
        }
    }
    printf("%d",c);



    return 0;
}
