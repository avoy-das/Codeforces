#include <stdio.h>
int main()
{
    char a[101];
    int i,j,count=0;
    scanf("%s", a);
    for (i=0;i<strlen(a);i++)
    {
        count = 0;
        for (j=i;j<(i+7);j++)
        {
            if (a[i]==a[j])
            {
                count++;
            }
        }
        if (count==7)
        {
            printf("YES\n");
            return 0;
        }
    }
    printf("NO\n");

    return 0;
}
