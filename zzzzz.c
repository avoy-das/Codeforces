#include <stdio.h>
#include <string.h>

int compare(char a[100],char b[100])
{
    return strcmp(a,b);
}

void concatenate(char m[100],char n[100])
{
    printf("%s\n",strcat(m,n));
}

void stringcopy(char a[100],char b[100])
{
    strcpy(a,b);
    printf("%s\n",a);
}


int main()
{
    char x[100],y[100];
    scanf("%s %s",x,y);

    int cmp = compare(x,y);
    if (cmp==0)
    {
        printf("Strings are same\n");
    }
    else
    {
        printf("Strings not same\n");
    }
    concatenate(x,y);
    stringcopy(x,y);

}
